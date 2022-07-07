#pragma once

class LayoutButton
{
public:
    LayoutButton(al::LayoutActor*, al::FunctorBase const&);
    isVisible();
    onHover(bool);
    onPress();
    setVisible(bool);
};
