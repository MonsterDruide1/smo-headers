#pragma once

class EventFlowNodeChangeWorldDemoMessage
{
public:
    EventFlowNodeChangeWorldDemoMessage(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getTalkId();
    initAfterPlacement();
    start();
    checkNeedTalkPrevWorld() const;
    end();
    control();
    exeTalkPrevWorld();
    exeTalkNextWorld();
    exeTalkTipsBefore();
    exeTalkTips();
    exeTalkTipsAfter();
    exeOpenHelp();
    exeBossAttackHome();
};
