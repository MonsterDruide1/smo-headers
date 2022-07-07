#pragma once

namespace BossForest {

init(al::ActorInitInfo const&);
isFirstDemo() const;
isEnableSkipDemo() const;
skipDemo();
updateSatellitesPose(sead::Quat<float> const&);
getCurrentSatelliteController() const;
getSenobiGeneratePoint(int) const;
getFieldWalls();
control();
attackSensor(al::HitSensor*, al::HitSensor*);
isStateBodyAttack() const;
setStateDemoBattleEnd();
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
getLifePartsEffectMtx(char const*);
exeWaitForBattleStart();
exeDemoBattleStart();
exeBattlePhase1();
exeBattlePhase2();
exeBattlePhase3();
exeDemoBattleEnd();
exeDie();

} 
