#pragma once

class ElectricWire
{
public:
    ElectricWire(char const*);
    init(al::ActorInitInfo const&);
    tryCreateElectricWireLinks(al::LiveActor**, al::LiveActor*, al::ActorInitInfo const&, char const*, int);
    createGraph(al::ActorInitInfo const&);
    switchStartOn();
    tryUpdateDisplayModel();
    attackSensor(al::HitSensor*, al::HitSensor*);
    searchAliveKeeperGraphVertexBySensor(al::HitSensor const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture(sead::Vector3<float> const*, sead::Vector3<float> const*, bool, bool);
    initAfterPlacement();
    afterSpringMovement();
    springMovement();
    control();
    exeHackEnd();
    exeStandby();
    exeCaptureWait();
    exeCaptureStart();
    exeCaptureHackStart();
    trySwitchMoveEndCamera(ElectricWireVertex const*);
    exeSwitchRail();
    trySetPoseGraphMoveDir(float);
    getMoveActionName() const;
    getMoveAttackableActionName() const;
    getSparkActionName() const;
    exeTurnFrontStartDemo();
    exeMove();
    checkMovableInputAndNextNerve();
    checkEnableMoveByGraph(al::Graph::PosVertex const**, sead::Vector2<float> const&, al::LiveActor const*, al::Graph::PosVertex const*);
    checkMovableInputNextByGraph(bool*, al::Graph::PosVertex const*, sead::Vector2<float> const&);
    exeMoveEnd();
    onMoveEndEnd();
    exeLightning();
    exeLightningEnd();
    exeLightningEndToMove();
    addDemoActorElectricWirePartsAll();
};
