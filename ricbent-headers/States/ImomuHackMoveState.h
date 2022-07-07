#pragma once

class ImomuHackMoveState
{
public:
    ImomuHackMoveState(al::LiveActor*, ImomuInfo*);
    appear();
    isExistPlayerMoveInput() const;
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartExpand(bool*, bool*);
    isStopMove(IUsePlayerHack const*, ImomuPartsController const*) const;
    exeWait();
    tryFall();
    tryPivot(bool);
    exeWalk();
    exeFall();
    exeLand();
    exeTurn();
    ~ImomuHackMoveState();
};
