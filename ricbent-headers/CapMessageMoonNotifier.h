#pragma once

class CapMessageMoonNotifier
{
public:
    CapMessageMoonNotifier();
    initialize(al::StageInfo const*, al::ActorInitInfo const&);
    tryShowCapMessageMoonNotify();
    findNoticeInfo(CapMessageMoonInfo*, int);
    exeWait();
    exeNotify();
    getSceneObjName() const;
    ~CapMessageMoonNotifier();
};
