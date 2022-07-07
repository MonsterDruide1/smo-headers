#pragma once

namespace al { 

class ConveyerKeyKeeper
{
public:
    ConveyerKeyKeeper();
    init(al::ActorInitInfo const&);
    calcPosAndQuat(sead::Vector3<float>*, sead::Quat<float>*, int*, float) const;
    calcPosAndQuatByKeyIndex(sead::Vector3<float>*, sead::Quat<float>*, int) const;
    calcClippingSphere(sead::Vector3<float>*, float*, float) const;
    getConveyerKey(int) const;
};

} 
