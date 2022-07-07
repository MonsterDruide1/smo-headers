#pragma once

class AmiiboNpcStateChangeCostume
{
public:
    AmiiboNpcStateChangeCostume(al::LiveActor*, al::PlacementInfo const&, al::EventFlowExecutor*);
    init();
    appear();
    control();
    receiveEvent(al::EventFlowEventData const*);
    ~AmiiboNpcStateChangeCostume();
};
