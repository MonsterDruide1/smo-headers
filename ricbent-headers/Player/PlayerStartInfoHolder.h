#pragma once

class PlayerStartInfoHolder
{
public:
    PlayerStartInfoHolder();
    init(al::CameraDirector*, int);
    registerPlayerStartInfo(al::PlacementInfo const*, char const*, al::CameraTicket*, PlayerStartObj*, sead::Vector3<float> const*, sead::Quat<float> const*);
    isRegistered(al::PlacementInfo const*, char const*) const;
    registerChangeStageAreaGroup(al::AreaObjGroup*, al::ActorInitInfo const&);
    registerWarpAreaGroup(al::AreaObjGroup*, al::ActorInitInfo const&);
    registerRestartAreaGroup(al::AreaObjGroup*);
    tryFindInitInfoByStartId(char const*) const;
    tryFindInitInfoByPlacementIdString(char const*) const;
    getSceneObjName() const;
    ~PlayerStartInfoHolder();
    getCameraDirector() const;
};
