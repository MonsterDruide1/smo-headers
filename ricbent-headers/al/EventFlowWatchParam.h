#pragma once

namespace al { 

class EventFlowWatchParam
{
public:
    EventFlowWatchParam();
    load(al::ByamlIter const&);
    isWatchSensor(al::HitSensor const*) const;
    calcWatchTrans(sead::Vector3<float>*, al::LiveActor const*) const;
};

} 
