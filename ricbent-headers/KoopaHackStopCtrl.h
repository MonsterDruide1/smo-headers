#pragma once

class KoopaHackStopCtrl
{
public:
    KoopaHackStopCtrl();
    startStop(al::LiveActor const*);
    endStop(al::LiveActor const*);
    resetPosture(al::LiveActor const*, sead::Quat<float> const&, sead::Vector3<float> const&);
    tryResetPosture(al::LiveActor*);
    getSceneObjName() const;
    ~KoopaHackStopCtrl();
};
