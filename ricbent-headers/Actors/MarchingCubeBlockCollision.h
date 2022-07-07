#pragma once

class MarchingCubeBlockCollision
{
public:
    MarchingCubeBlockCollision(char const*, sead::Vector3<int> const&, MarchingCubeBlock*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    destroy();
    appear();
    movement();
    appearCoin();
    isAlive() const;
    isBroken() const;
    isItemCoin() const;
    exeWait();
    exeBroken();
};
