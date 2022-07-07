#pragma once

class EventFlowNodeMessageBalloon
{
public:
    EventFlowNodeMessageBalloon(char const*);
    init(al::EventFlowNodeInitInfo const&);
    initAfterPlacement();
    start();
    control();
    getNextId() const;
    exeWait();
    getMessage() const;
    exeScare();
    exeTrigger();
    isEnableEndFork() const;
};
