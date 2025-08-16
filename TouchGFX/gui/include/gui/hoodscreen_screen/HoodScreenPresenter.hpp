#ifndef HOODSCREENPRESENTER_HPP
#define HOODSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class HoodScreenView;

class HoodScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    HoodScreenPresenter(HoodScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~HoodScreenPresenter() {}

private:
    HoodScreenPresenter();

    HoodScreenView& view;
};

#endif // HOODSCREENPRESENTER_HPP
