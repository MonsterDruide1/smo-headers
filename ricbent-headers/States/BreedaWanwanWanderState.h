#pragma once

class BreedaWanwanWanderState
{
public:
    BreedaWanwanWanderState(BreedaWanwan*, sead::Vector3<float> const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    resetInitPos();
    calcTargetPosition(sead::Vector3<float>*, int);
    exeWait();
    exeTurn();
    exeMove();
    isMove() const;
    ~BreedaWanwanWanderState();
};
