#pragma once

class BossRaidNpc
{
public:
    BossRaidNpc(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableReaction() const;
    exeEvent();
    exeReaction();
};
