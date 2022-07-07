#pragma once

class BirdMtxGlideCtrl
{
public:
    tryCreateAliveWaitByLinksBird(sead::Matrix34<float> const*, sead::Vector3<float> const&, al::ActorInitInfo const&, char const*);
    update();
    makeActorDeadBirdIfAlive();
    exeInvalid();
    exeValid();
    validateGlide();
    invalidateGlide();
    isWaitBird() const;
    BirdMtxGlideCtrl(Bird*);
    ~BirdMtxGlideCtrl();
};
