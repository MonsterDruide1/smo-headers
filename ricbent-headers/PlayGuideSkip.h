#pragma once

class PlayGuideSkip
{
public:
    PlayGuideSkip(char const*, al::LayoutInitInfo const&);
    kill();
    tryAppear();
    appearCore();
    end();
    isEnableSkipDemo() const;
    exeAppear();
    exeWait();
    exeEnd();
};
