#pragma once

class RaceManGoal
{
public:
    RaceManGoal(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isAttachedActor(al::LiveActor const*) const;
    exeWait();
    exeEnd();
    isGoalPlayer() const;
    attachActor(GhostPlayer*);
    calcMarioJointQuatPos(sead::Quat<float>*, sead::Vector3<float>*);
    getRaceFirstJointName();
};
