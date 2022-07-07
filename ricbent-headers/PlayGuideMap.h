#pragma once

class PlayGuideMap
{
public:
    PlayGuideMap(char const*, al::LayoutInitInfo const&);
    start();
    end();
    endImmediate();
    exeHide();
    exeShow();
    exeEnd();
    ~PlayGuideMap();
};
