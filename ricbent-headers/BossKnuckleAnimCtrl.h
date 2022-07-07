#pragma once

class BossKnuckleAnimCtrl
{
public:
    BossKnuckleAnimCtrl(BossKnuckle*);
    update();
    startWait();
    startAttackGraspSign();
    isPlayerDamage();
    isNumbness();
    startSand();
    startGraspMoveHit();
    startNumbnessIfNotPlaying();
    startAngryIfNotPlaying();
    isAngry();
    startAngryHighLoopIfNotPlaying();
    startAngryHighOneTimeIfNotPlaying();
    startMoveFrontIfNotPlaying();
    startFearIfNotPlaying();
    isFear();
    endNumbnessIfPlaying();
    endAngryIfPlaying();
    endFearIfPlaying();
    endMoveFrontIfPlaying();
    startPlayerDamage();
    exeBeforeStart();
    exeWait();
    exeAttackGraspSign();
    exeSand();
    exeNumbnessStart();
    exeNumbness();
    exeNumbnessEnd();
    exeGraspMoveHit();
    exeAngryStart();
    exeAngry();
    exeAngryEnd();
    exeAngryHighLoop();
    exeAngryHighOneTime();
    exeFearStart();
    exeFear();
    exeFearEnd();
    exeMoveFrontStart();
    exeMoveFront();
    exeMoveFrontEnd();
    exePlayerDamage();
    ~BossKnuckleAnimCtrl();
};
