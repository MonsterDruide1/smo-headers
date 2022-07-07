#pragma once

class EventFlowNodeCheckPlayingCollectBgm
{
public:
    EventFlowNodeCheckPlayingCollectBgm(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
