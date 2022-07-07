#pragma once

class BirdGatheringSpotDirector
{
public:
    BirdGatheringSpotDirector();
    init(al::ActorInitInfo const&, al::AreaObjGroup const*, al::CameraDirector*, al::SceneObjHolder*, al::ClippingJudge const*, char const*);
    execute();
    getCameraDirector() const;
    getSceneObjHolder() const;
};
