#pragma once

class PlayGuideCamera
{
public:
    PlayGuideCamera(char const*, al::LayoutInitInfo const&, al::LiveActor const*);
    hide();
    start();
    exeHide();
    tryAppear();
    exeAppear();
    exeWait();
    exeEnd();
};
