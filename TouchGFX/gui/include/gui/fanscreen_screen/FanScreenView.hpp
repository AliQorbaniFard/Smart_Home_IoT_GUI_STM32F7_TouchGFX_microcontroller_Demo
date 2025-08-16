#ifndef FANSCREENVIEW_HPP
#define FANSCREENVIEW_HPP

#include <gui_generated/fanscreen_screen/FanScreenViewBase.hpp>
#include <gui/fanscreen_screen/FanScreenPresenter.hpp>

class FanScreenView : public FanScreenViewBase
{
public:
    FanScreenView();
    virtual ~FanScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FANSCREENVIEW_HPP
