#ifndef KITCHENSCREENVIEW_HPP
#define KITCHENSCREENVIEW_HPP

#include <gui_generated/kitchenscreen_screen/KitchenScreenViewBase.hpp>
#include <gui/kitchenscreen_screen/KitchenScreenPresenter.hpp>

class KitchenScreenView : public KitchenScreenViewBase
{
public:
    KitchenScreenView();
    virtual ~KitchenScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KITCHENSCREENVIEW_HPP
