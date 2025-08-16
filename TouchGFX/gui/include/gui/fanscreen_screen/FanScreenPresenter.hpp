#ifndef FANSCREENPRESENTER_HPP
#define FANSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class FanScreenView;

class FanScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    FanScreenPresenter(FanScreenView& v);

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

    virtual ~FanScreenPresenter() {}

private:
    FanScreenPresenter();

    FanScreenView& view;
};

#endif // FANSCREENPRESENTER_HPP
