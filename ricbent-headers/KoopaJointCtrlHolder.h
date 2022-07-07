#pragma once

class KoopaJointCtrlHolder
{
public:
    KoopaJointCtrlHolder(al::LiveActor*);
    update(al::LiveActor const*);
    startArmorScaling();
    startThrowBallTwistSuppression();
    endThrowBallTwistSuppression();
    forceResetThrowBallTwistSuppression();
    getThrowBallSuppressionRate() const;
};
