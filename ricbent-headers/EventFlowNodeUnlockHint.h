#pragma once

class EventFlowNodeUnlockHint
{
public:
    EventFlowNodeUnlockHint(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeTalkMessageCloseWait();
    exeWait();
};
