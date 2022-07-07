#pragma once

class ShopCamera
{
public:
    ShopCamera(al::LiveActor const*);
    execute();
    tryStart();
    tryEnd();
    exeAppear();
    exeWait();
    exeEnd();
    exeNone();
    getNerveKeeper() const;
};
