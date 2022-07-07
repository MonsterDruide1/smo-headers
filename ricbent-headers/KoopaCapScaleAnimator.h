#pragma once

class KoopaCapScaleAnimator
{
public:
    KoopaCapScaleAnimator(al::LiveActor*);
    update(al::LiveActor*);
    getScale() const;
    startWaitHoverScaling();
    reset();
    exeStop();
    exeWaitHoverScaling();
    ~KoopaCapScaleAnimator();
};
