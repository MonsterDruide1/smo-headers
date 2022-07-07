#pragma once

class RankingNpc
{
public:
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    control();
    isAgreePrivacyPolicy() const;
    agreePrivacyPolicy();
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    isRequestOpenLayout() const;
    endTalk();
    exeWait();
    exeShow();
    exeReaction();
    exeEndTalk();
    getMessageSystem() const;
    ~RankingNpc();
};
