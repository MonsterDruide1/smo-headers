#pragma once

class NoteObjDirector
{
public:
    NoteObjDirector(char const*, NoteObjDirector*, float);
    init(al::ActorInitInfo const&);
    appearNote();
    getNote(bool);
    getNoteFirst(bool);
    reAppear();
    exeInit();
    exeAppearDemo();
    tryAddAppearDemo();
    exeWait();
    exeWaitGetAll();
    tryNotifyAllGet();
};
