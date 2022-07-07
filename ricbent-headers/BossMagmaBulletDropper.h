#pragma once

class BossMagmaBulletDropper
{
public:
    BossMagmaBulletDropper(BossMagma*, al::ActorInitInfo const&, sead::Vector3<float> const&, unsigned int, unsigned int);
    exeWait();
    exeShotMove();
    shot(unsigned int, unsigned int, float);
    exeShotLv3();
    shotLv3(unsigned int, unsigned int, float);
    exeRoll();
    roll();
    startShotMove(unsigned int);
    startShotLv3();
    startRoll(unsigned int);
    clear();
    reinit();
    stop();
    killAllEffect();
    getBullet();
    ~BossMagmaBulletDropper();
};
