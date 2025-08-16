#include <gui/ovenscreen_screen/OvenScreenView.hpp>

OvenScreenView::OvenScreenView()
{

}

void OvenScreenView::setupScreen()
{
    OvenScreenViewBase::setupScreen();
}

void OvenScreenView::tearDownScreen()
{
    OvenScreenViewBase::tearDownScreen();
}

void OvenScreenView::incTemp()		//increasing the temperature
{
	temp = temp + 10;

	if(temp > 500)
	{
		temp = 500;
	}
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d",temp);	// passing temp value to TouchGFX (this function is found in OvenScreenViewBase.cpp)
	textArea1.invalidate();
}


void OvenScreenView::decTemp()		//decreasing the temperature
{
	temp = temp - 10;

	if(temp < 0)
	{
		temp = 0;
	}
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d",temp);	// passing temp value to TouchGFX (this function is found in OvenScreenViewBase.cpp)
	textArea1.invalidate();
}
