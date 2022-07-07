#pragma once

class BlockHard
{
public:
    BlockHard(char const*);
    init(al::ActorInitInfo const&);
    kill();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startBreak(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getJudgeFunction(char const*) const;
    validateIncludeShineChip();
};
