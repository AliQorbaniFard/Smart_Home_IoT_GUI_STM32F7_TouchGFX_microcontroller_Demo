#ifndef BATHROMSCREENVIEW_HPP
#define BATHROMSCREENVIEW_HPP

#include <gui_generated/bathromscreen_screen/BathromScreenViewBase.hpp>
#include <gui/bathromscreen_screen/BathromScreenPresenter.hpp>

class BathromScreenView : public BathromScreenViewBase
{
public:
    BathromScreenView();
    virtual ~BathromScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BATHROMSCREENVIEW_HPP
