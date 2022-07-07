#pragma once

class PlayerBindKeeper
{
public:
    PlayerBindKeeper(al::HitSensor*, IUsePlayerPuppet*);
    sendStartMsg();
    clearBindableSensor();
    cancelBind();
    receiveEndMsg(al::SensorMsg const*);
    clearBindImpl();
    cancelBindByDemo();
    sendMsgBindDamage();
    receiveRequestDamage();
    sendMsgCollidedGround();
    sendMsgEnableMapCheckPointWarp();
    sendMsgBindKeepDemoStart();
    sendMsgBindKeepDemoExecute();
    sendMsgBindKeepDemoEnd();
    sendMsgBindRecoveryLife() const;
    collectBindableSensor(al::HitSensor*, al::HitSensor*);
    appendBindRequest(al::HitSensor*);
    resetInvalidTimer();
};
