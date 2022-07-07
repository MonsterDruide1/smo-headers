#pragma once

class Compass
{
public:
    Compass(char const*, al::LayoutInitInfo const&, al::PlayerHolder const*);
    appear();
    end();
    exeAppear();
    updateLayout();
    exeWait();
    exeEnd();
};
