#pragma once

class EventFlowNodeCapManHeroTalkReturn
{
public:
    EventFlowNodeCapManHeroTalkReturn(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeTurnToPlayer();
    exeReturn();
    exeReactionCapOn();
    exeEndWait();
};
