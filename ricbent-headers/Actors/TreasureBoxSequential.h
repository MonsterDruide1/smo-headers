#pragma once

class TreasureBoxSequential
{
public:
    TreasureBoxSequential(char const*);
    init(al::ActorInitInfo const&);
    control();
    isOpenEnd(int);
    correctOpen();
    show();
    hide();
    popEnemy();
    startEnemyMove();
    isKillAllEnemy();
    addDemoActor();
    reset();
    popBalloon();
    endBalloon();
    killBalloon();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeOpen();
    exeOpenEnd();
    exeBounce();
    exeOpenWait();
    exeHide();
};
