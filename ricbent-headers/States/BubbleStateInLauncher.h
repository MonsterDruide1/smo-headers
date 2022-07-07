#pragma once

class BubbleStateInLauncher
{
public:
    BubbleStateInLauncher(Bubble*);
    appear();
    kill();
    exeEnter();
    exeWait();
    exeShoot();
    isWaiting() const;
    isFlying() const;
    shoot(sead::Vector3<float> const&, float);
    calcLaunchPos(sead::Vector3<float>*, sead::Vector3<float> const&, float, int) const;
    ~BubbleStateInLauncher();
};
