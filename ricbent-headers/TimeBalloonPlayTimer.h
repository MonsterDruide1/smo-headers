#pragma once

class TimeBalloonPlayTimer
{
public:
    TimeBalloonPlayTimer(al::LiveActor const*);
    start();
    update();
    addExtensionObserver(IUseTimeBalloonPlayTimerExtensionObserver*);
    addRemainingFrameObserver(IUseTimeBalloonPlayTimerRemainingFrameObserver*);
    isTimeUp() const;
};
