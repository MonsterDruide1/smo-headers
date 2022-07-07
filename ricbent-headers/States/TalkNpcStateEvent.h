#pragma once

class TalkNpcStateEvent
{
public:
    TalkNpcStateEvent(char const*, al::LiveActor*, TalkNpcParam const*, al::EventFlowExecutor*, int);
    initStateReaction(ActorStateReactionBase*);
    initAfterPlacement();
    appear();
    kill();
    update();
    trySwitchEventEntry(char const*);
    trySwitchEventEntryAndUpdate(char const*);
    switchEventEntry(char const*);
    tryStartReaction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartReactionWithoutTrample(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCapReaction() const;
    isScare() const;
    exeActive();
    endActive();
    exeReaction();
    exeScareStart();
    exeScare();
    exeScareEnd();
    exeDemo();
    exeStopByTraffic();
    exeBalloonAction();
    ~TalkNpcStateEvent();
};
