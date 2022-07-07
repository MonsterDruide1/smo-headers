#pragma once

class FastenerObj
{
public:
    FastenerObj(char const*);
    createFastenerKnobModel(al::ActorInitInfo const&);
    createFastenerPartsModel(al::ActorInitInfo const&);
    createSensor(al::ActorInitInfo const&);
    init(al::ActorInitInfo const&);
    createGraph(al::ActorInitInfo const&);
    switchKill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    searchGraphFastenerVertexBySensorPos(al::HitSensor const*);
    searchFastenerKnobModelBySensor(al::HitSensor const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture(sead::Vector3<float> const*, sead::Quat<float> const*);
    control();
    exeHackEnd();
    exeFullOpenEnd();
    exeCleanupWait();
    exeCleanup();
    exeStandby();
    exeCaptureWait();
    exeCaptureStart();
    exeCaptureHackStart();
    trySetPoseGraphMoveDir(float, sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeMove();
    checkMovableInputAndNextNerve();
    checkEnableMoveByGraph(al::Graph::PosVertex const**, sead::Vector2<float> const&, al::LiveActor const*, al::Graph::PosVertex const*);
    checkMovableInputNextByGraph(bool*, al::Graph::PosVertex const*, sead::Vector2<float> const&);
    exeMoveEnd();
};
