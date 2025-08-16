#ifndef HALLSCREENVIEW_HPP
#define HALLSCREENVIEW_HPP

#include <gui_generated/hallscreen_screen/HallScreenViewBase.hpp>
#include <gui/hallscreen_screen/HallScreenPresenter.hpp>

class HallScreenView : public HallScreenViewBase
{
public:
    HallScreenView();
    virtual ~HallScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleTickEvent();		// used for upadating animation


protected:

    // The callback registers when a move animaiton for bathroom- and kitchenbutton is done.
    Callback<HallScreenView, const MoveAnimator<Button>&> buttonMoveCallback;
    void buttonMoveHandler(const MoveAnimator<Button>& src);

    // The callback registers when a fade animaiton for bathroom- and kitchenbutton is done.
    Callback<HallScreenView, const FadeAnimator< MoveAnimator<Button> >&> buttonFadeCallback;
    void buttonFadeHandler(const FadeAnimator< MoveAnimator<Button> >& src);

    int calcDuration(int destinationX, int currentX);

    int tickCounter;			//will be used as a counter (every 16 ms)
    float pixelsPrTick;			//will be used to set animation speed

};

#endif // HALLSCREENVIEW_HPP
