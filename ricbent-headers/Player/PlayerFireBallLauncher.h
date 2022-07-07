#pragma once

class PlayerFireBallLauncher
{
public:
    PlayerFireBallLauncher(unsigned int, al::LiveActor const*, al::ActorInitInfo const&, IPlayerModelChanger const*);
    isEnableShoot() const;
    shoot();
};
