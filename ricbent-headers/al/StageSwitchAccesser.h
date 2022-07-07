#pragma once

namespace al { 

class StageSwitchAccesser
{
public:
    StageSwitchAccesser();
    init(al::StageSwitchDirector*, char const*, al::PlacementId const&);
    getStageSwitchDirector() const;
    isValid() const;
    onSwitch();
    offSwitch();
    isOnSwitch() const;
    isEnableRead() const;
    isEnableWrite() const;
    isEqualSwitch(al::StageSwitchAccesser const*) const;
    addListener(al::StageSwitchListener*);
};

} 
