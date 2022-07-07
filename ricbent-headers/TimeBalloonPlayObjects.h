#pragma once

class TimeBalloonPlayObjects
{
public:
    TimeBalloonPlayObjects(al::ActorInitInfo const&, TimeBalloonNpc*);
    setBalloonPos(sead::Vector3<float> const&);
    appearPlayGetBalloon();
    appearPlaySetBalloon();
    releaseBalloon();
    appearCircle();
    appearHintArrow();
    startPlayCircle();
    startHintArrowFade();
    turnHintArrow();
    killHintArrow();
    setBalloonPosAbovePlayer();
    addDemoActors();
    resetPlayerPos();
    recordBalloonPos();
    isValidBalloonPos() const;
    faceToPlayerLuigi();
    getBalloonActor();
    isPlayGetBalloonEnd() const;
    getCircleActor() const;
};
