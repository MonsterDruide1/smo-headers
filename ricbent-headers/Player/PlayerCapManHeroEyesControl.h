#pragma once

class PlayerCapManHeroEyesControl
{
public:
    PlayerCapManHeroEyesControl(char const*, al::LiveActor*, al::LiveActor*);
    start();
    fastStart();
    end();
    startPuppet();
    endPuppet();
    kill();
    update();
    getPuppetEye() const;
    isAppear() const;
    isDisappear() const;
    isDemo() const;
    isDeadCap() const;
    requestWaitAnimChange(char const*);
    exeAppear();
    exeWait();
    exeDisappear();
    exeDead();
    exeDemo();
    ~PlayerCapManHeroEyesControl();
};
