#ifndef OVENSCREENVIEW_HPP
#define OVENSCREENVIEW_HPP

#include <gui_generated/ovenscreen_screen/OvenScreenViewBase.hpp>
#include <gui/ovenscreen_screen/OvenScreenPresenter.hpp>

class OvenScreenView : public OvenScreenViewBase
{
public:
    OvenScreenView();
    virtual ~OvenScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void incTemp();		//increasing the temperature
    virtual void decTemp();		//decreasing the temperature
    int16_t temp = 100;			//temperature value

protected:
};

#endif // OVENSCREENVIEW_HPP
