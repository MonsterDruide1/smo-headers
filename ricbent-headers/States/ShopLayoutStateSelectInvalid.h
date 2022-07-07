#pragma once

class ShopLayoutStateSelectInvalid
{
public:
    ShopLayoutStateSelectInvalid(char const*, CommonHorizontalList*, al::SimpleLayoutAppearWaitEnd*, al::LayoutActor*, char const*, al::LiveActor*);
    setting(char const*, int, bool);
    appear();
    exeDecide();
    exeWait();
    ~ShopLayoutStateSelectInvalid();
};
