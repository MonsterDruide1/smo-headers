#pragma once

namespace al { 

class SupportFreezeSyncGroup
{
public:
    SupportFreezeSyncGroup();
    init(al::ActorInitInfo const&);
    regist(al::LiveActor*);
    setHostSensor(al::HitSensor*);
    isEqualGroupId(al::ActorInitInfo const&) const;
    movement();
};

} 
