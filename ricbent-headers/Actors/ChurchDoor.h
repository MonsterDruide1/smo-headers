#pragma once

class ChurchDoor
{
public:
    ChurchDoor(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isOpenWait() const;
    isDemoEnterChurch() const;
    startDemoEnterChurch();
    endDemoEnterChurch();
    exeCloseWait1();
    exeOpen1();
    exeCloseWait2();
    exeOpen2();
    exeCloseWait3();
    exeOpen3();
    exeOpenWait();
    exeDemoEnterChurch();
};
