#pragma once

class NpcEventTalkInfo
{
public:
    NpcEventTalkInfo();
    NpcEventTalkInfo(al::LiveActor const*, char16_t const*, al::MessageTagDataHolder const*);
    reset();
};
