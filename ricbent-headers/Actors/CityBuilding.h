#pragma once

class CityBuilding
{
public:
    CityBuilding(char const*);
    init(al::ActorInitInfo const&);
    listenDemoStart();
    listenBattleStart();
    listenBattleEnd();
    listenKill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitScenario1();
    exeWaitScenario2_();
    exeMofumofuDemo();
    exeLightOff();
    exeLightUp();
};
