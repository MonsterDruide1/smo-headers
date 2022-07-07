#pragma once

class BossRaidStateLightning
{
public:
    BossRaidStateLightning(BossRaid*, al::ActorInitInfo const&);
    appear();
    exeLightning();
    getLightningInterval() const;
    exeLightningEnd();
    killWheel();
    ~BossRaidStateLightning();
};
