#pragma once

class PlayerStateHack
{
public:
    PlayerStateHack(al::LiveActor*, PlayerHackKeeper*, IPlayerModelChanger*, PlayerAnimator*, HackCap*);
    appear();
    prepareStartHack(al::HitSensor const*, al::HitSensor const*);
    prepareEndHack();
    prepareStageStartHack();
    isIgnoreUpdateCollider() const;
    isEnableChangeState() const;
    isEnableModelSyncShowHide() const;
    isEnableCancelHack() const;
    exeHackDemo();
    exeHackDemoPuppetable();
    exeHack();
    exeEnd();
    ~PlayerStateHack();
};
