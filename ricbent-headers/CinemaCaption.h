#pragma once

class CinemaCaption
{
public:
    CinemaCaption(al::LayoutInitInfo const&);
    tryAppear(CaptionInfoHolder*);
    setCaptionMsg(char16_t const*);
    calcShowFrame();
    tryEnd();
    exeAppear();
    updateMessageCore();
    exeWait();
    exeEnd();
    trySetNextCaptionMsg(CaptionInfo*);
    tryHideCurrentCaptionMsg(CaptionInfo*);
};
