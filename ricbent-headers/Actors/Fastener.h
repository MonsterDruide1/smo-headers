#pragma once

class Fastener
{
public:
    Fastener(char const*);
    init(al::ActorInitInfo const&);
    tryCreateFastenerLinks(al::LiveActor**, al::LiveActor*, al::ActorInitInfo const&, char const*, int);
    createGraph(al::ActorInitInfo const&);
    switchStartOn();
    tryUpdateDisplayModel();
    createEdgeModel(al::ActorInitInfo const&);
    setKnobOrder(sead::FixedObjArray<int, 64>*);
    createMesh(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    searchAliveKeeperGraphFastenerVertexBySensorPos(al::HitSensor const*);
    searchFastenerKnobModelBySensor(al::HitSensor const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture(sead::Vector3<float> const*, sead::Vector3<float> const*);
    kill();
    appear();
    control();
    tryReset();
    exeHackEnd();
    exeStandby();
    exeCaptureWait();
    exeCaptureStart();
    exeCaptureHackStart();
    trySetPoseGraphMoveDir(float, sead::Vector3<float> const&);
    exeMove();
    checkMovableInputAndNextNerve();
    checkEnableMoveByGraph(al::Graph::PosVertex const**, sead::Vector2<float> const&, al::LiveActor const*, al::Graph::PosVertex const*);
    checkMovableInputNextByGraph(bool*, al::Graph::PosVertex const*, sead::Vector2<float> const&);
    exeMoveEnd();
    onMoveEndEnd();
};
