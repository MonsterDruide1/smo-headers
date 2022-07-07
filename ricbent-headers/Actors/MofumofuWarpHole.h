#pragma once

class MofumofuWarpHole
{
public:
    MofumofuWarpHole(char const*);
    init(al::ActorInitInfo const&);
    appear();
    disappear();
    close();
    closeAndDisappear();
    open();
    startHideMove();
    startDashSign();
    isWait() const;
    isHideWait() const;
    calcDashSignFront(sead::Vector3<float>*) const;
    exeAppear();
    exeWait();
    exeDisappear();
    exeClose();
    exeHideWait();
    exeHideMove();
    exeDashSign();
    exeDashSignEnd();
};
