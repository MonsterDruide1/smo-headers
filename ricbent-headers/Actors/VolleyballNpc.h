#pragma once

class VolleyballNpc
{
public:
    VolleyballNpc(char const*);
    init(al::ActorInitInfo const&);
    control();
    endGame();
    receiveEvent(al::EventFlowEventData const*);
    startGame(bool);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    addSuccessCount();
    isEnableAppearLayout() const;
    isEnterGameArea() const;
    isEndMiss() const;
    isInGame() const;
    startSmashReaction();
    exeWait();
    exeCapMessageWaitForThrough();
    exeCapMessage();
    exeLetsPlay();
    exeWaitAfterGame();
    exeScare();
    exeWaitAttackSign();
    exeAttackSign();
    tryChangeMiss();
    exeAttack();
    calcTargetTrans(sead::Vector3<float>*) const;
    tryChangeAttack();
    tryChangeAttackSign();
    exeAttackWait();
    exeMiss();
    exeWaitRetry();
    exeReactionCap();
    exeReactionTrample();
};
