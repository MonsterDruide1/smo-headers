#pragma once

class CapMessageEnableChecker
{
public:
    CapMessageEnableChecker(al::LiveActor*, al::ActorInitInfo const&);
    calcAimPos(sead::Vector3<float>*) const;
    updateCheckEnableAppear(int);
    isClippedAimPoint() const;
    checkInRadius(sead::Vector3<float> const&) const;
    execute();
};
