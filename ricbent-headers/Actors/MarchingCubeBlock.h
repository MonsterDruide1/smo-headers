#pragma once

class MarchingCubeBlock
{
public:
    MarchingCubeBlock(char const*);
    init(al::ActorInitInfo const&);
    killUnusedCollision();
    updateAnimAll();
    control();
    updateTargetMarkerSensorPos();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    calcVertexBitFlag(int, int, int);
    updateAnim(sead::Vector3<int> const&);
    receiveBreakIndex(sead::Vector3<int> const&, MarchingCubeBlockCollision*, bool);
    countupCoinCount(MarchingCubeBlockCollision*);
    receiveBreakIndexAndAbove(sead::Vector3<int> const&, MarchingCubeBlockCollision*, bool);
    receiveExplosionMsg(al::SensorMsg const*, al::HitSensor*);
};
