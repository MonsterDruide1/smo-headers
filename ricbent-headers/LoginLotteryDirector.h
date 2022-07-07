#pragma once

class LoginLotteryDirector
{
public:
    LoginLotteryDirector();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    updateHitInfo();
    isHitter() const;
    showEntriesRouletteLike();
    exeWait();
    exeWrite();
    exeMessage();
    exeHit();
    exeOut();
    getSceneObjName() const;
    ~LoginLotteryDirector();
};
