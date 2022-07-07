#pragma once

class MofumofuBulletHolder
{
public:
    MofumofuBulletHolder();
    init(al::ActorInitInfo const&, bool);
    setGroundHeightAll(float);
    applyLeftAroundAll();
    applyRightAroundAll();
    applyDownDirAll();
    forceExplodeAll();
    isDeadAll() const;
    tryFindEnableShootBullet() const;
};
