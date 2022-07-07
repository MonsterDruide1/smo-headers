#pragma once

namespace al { 

class BreakMapPartsBase
{
public:
    getJudgeFunction(char const*) const;
    BreakMapPartsBase(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    movement();
    calcAnim();
    exeWait();
    exeBreak();
    startBreakByProgram();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};

} 
