#pragma once

class CapMessageMoonInfo
{
public:
    CapMessageMoonInfo();
    initPlacement(al::ActorInitInfo const&, bool, bool);
    judgeCondition(int) const;
    judgePriorityHigh(CapMessageMoonInfo const*) const;
    notified();
};
