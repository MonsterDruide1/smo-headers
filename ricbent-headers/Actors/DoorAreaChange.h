#pragma once

class DoorAreaChange
{
public:
    DoorAreaChange(char const*);
    init(al::ActorInitInfo const&);
    switchCloseAgain();
    start();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isOpen() const;
    setNoStart();
    enableStart();
    setHomeDoor(bool);
    exeNoStart();
    exeNoStartWithMessage();
    exeCloseWait();
    exeOpen();
    exeOpenWait();
    exeCloseBefore();
    exeClose();
};
