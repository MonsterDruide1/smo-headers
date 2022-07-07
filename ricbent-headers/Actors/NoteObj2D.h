#pragma once

class NoteObj2D
{
public:
    NoteObj2D(char const*, NoteObjDirector*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    reAppear();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartDisappear();
    tryAppearShine();
    exeAppear();
    exeWait();
    exeGot();
    exeDisappear();
    exeUpperPunchReaction();
    getActorDimensionKeeper() const;
};
