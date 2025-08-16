#include <gui/hallscreen_screen/HallScreenView.hpp>
#include <gui/common/Defines.hpp>
#include <touchgfx/Color.hpp>
#include <stdlib.h>				// for abs() function


HallScreenView::HallScreenView() :
buttonMoveCallback(this, &HallScreenView::buttonMoveHandler),			//callback for moving animation
buttonFadeCallback(this, &HallScreenView::buttonFadeHandler),			//callback for fading animation
tickCounter(0), 														// tick counter start = 0
pixelsPrTick(0.5)														// animation speed = 0.5 pixel per tick
{

}

void HallScreenView::setupScreen()
{
    HallScreenViewBase::setupScreen();

    Kitchen_Button.setMoveAnimationEndedAction(buttonMoveCallback);			//end of move animation

    Kitchen_Button.setFadeAnimationEndedAction(buttonFadeCallback);			//end of fade animation
    Bathroom_Button.startFadeAnimation(255, HALL_FADE_DURATION);			//start fade in animation (255-full) with duration for bathroom
    Kitchen_Button.startFadeAnimation(255, HALL_FADE_DURATION);				//start fade in animation (255-full) with duration for kitchen

}

void HallScreenView::tearDownScreen()
{
    HallScreenViewBase::tearDownScreen();
}

void HallScreenView::buttonMoveHandler(const MoveAnimator<Button>& src)		//moving positions for buttons
{
    if (Kitchen_Button.getX() == BUTTON_KITCHEN_X_1)
    {
    	Kitchen_Button.startMoveAnimation(BUTTON_KITCHEN_X_2, Kitchen_Button.getY(), calcDuration(BUTTON_KITCHEN_X_2, Kitchen_Button.getX()));
        Bathroom_Button.startMoveAnimation(BUTTON_BATHROOM_X_2, Bathroom_Button.getY(), calcDuration(BUTTON_BATHROOM_X_2, Bathroom_Button.getX()));
    }
    else if (Kitchen_Button.getX() == BUTTON_KITCHEN_X_2)
    {
    	Kitchen_Button.startMoveAnimation(BUTTON_KITCHEN_X_3, Kitchen_Button.getY(), calcDuration(BUTTON_KITCHEN_X_3, Kitchen_Button.getX()));
    	Bathroom_Button.startMoveAnimation(BUTTON_BATHROOM_X_3, Bathroom_Button.getY(), calcDuration(BUTTON_BATHROOM_X_3, Bathroom_Button.getX()));
    }
}

void HallScreenView::buttonFadeHandler(const FadeAnimator< MoveAnimator<Button> >& src)	   //move buttons after fading in
{
    Kitchen_Button.startMoveAnimation(BUTTON_KITCHEN_X_1, Kitchen_Button.getY(), calcDuration(BUTTON_KITCHEN_X_1, Kitchen_Button.getX()));
    Bathroom_Button.startMoveAnimation(BUTTON_BATHROOM_X_1, Bathroom_Button.getY(), calcDuration(BUTTON_BATHROOM_X_1, Bathroom_Button.getX()));
}

void HallScreenView::handleTickEvent()		//Handle tick event
{
    tickCounter++;

    if (tickCounter == 5)
    {
        tickCounter = 0;
    }
}


int HallScreenView::calcDuration(int destinationX, int currentX)		//set movement speed
{
    return abs(destinationX - currentX) / pixelsPrTick;
}
