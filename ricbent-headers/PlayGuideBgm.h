#pragma once

class PlayGuideBgm
{
public:
    PlayGuideBgm(char const*, al::LayoutInitInfo const&);
    start();
    end();
    endImmediate();
    exeHide();
    exeShow();
    exeEnd();
    exeEndForDead();
    ~PlayGuideBgm();
};
