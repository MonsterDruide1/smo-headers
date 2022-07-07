#pragma once

class NoteObj
{
public:
    NoteObj(char const*, NoteObjDirector*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    kill();
    reAppear();
    control();
    updateReaction();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartDisappear();
    tryAppearShine();
    setShadowDropLength(float);
    exeAppear();
    exeWait();
    exeGot();
    exeDisappear();
};
