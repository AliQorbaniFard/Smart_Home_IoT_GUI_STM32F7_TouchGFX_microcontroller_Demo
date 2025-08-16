#ifndef HOODSCREENVIEW_HPP
#define HOODSCREENVIEW_HPP

#include <gui_generated/hoodscreen_screen/HoodScreenViewBase.hpp>
#include <gui/hoodscreen_screen/HoodScreenPresenter.hpp>

class HoodScreenView : public HoodScreenViewBase
{
public:
    HoodScreenView();
    virtual ~HoodScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOODSCREENVIEW_HPP
