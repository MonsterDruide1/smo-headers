#pragma once

class WindBlowMapParts
{
public:
    WindBlowMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    activatePuzzleMode(WindBlowPuzzle*);
    isFixed() const;
    exeFreeMove();
    exeRailStop();
    calcRailForce(sead::Vector3<float>*, sead::Vector3<float>*);
    exeRailMove();
    exeGridWait();
    exeGridMove();
    exeGridFix();
};
