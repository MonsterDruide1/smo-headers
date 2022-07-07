#pragma once

class YukimaruRacePlayer
{
public:
    YukimaruRacePlayer(char const*);
    initPlayer(al::ActorInitInfo const&, PlayerInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isNerveCourseOut() const;
    movement();
    control();
    isWin() const;
    isTriggerJump() const;
    isHoldJump() const;
    isSwingDirLeft() const;
    isSwingDirRight() const;
    calcInputVec(sead::Vector3<float>*) const;
    exeWait();
    exeRace();
    exeEnd();
    exeResultJump();
    exeResult();
    exeCourseOutFadeIn();
    exeCourseOutResetPosition();
    exeCourseOutFadeOut();
    isEnableDemo();
};
