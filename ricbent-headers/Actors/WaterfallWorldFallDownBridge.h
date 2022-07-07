#pragma once

class WaterfallWorldFallDownBridge
{
public:
    WaterfallWorldFallDownBridge(char const*);
    init(al::ActorInitInfo const&);
    startDemo();
    isEndDemo() const;
    fallDown();
    exeWait();
    exeWaitCameraInterpolate();
    exeDemo();
    exeDemoAfter();
    exeFallDown();
};
