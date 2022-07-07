#pragma once

namespace alEffectEnvUtil {

setWindDir(al::EffectSystem*, sead::Vector3<float> const&);
setEnableRepulsion(al::EffectSystem*, bool);
setRepulsionPosNum(al::EffectSystem*, int);
setRepulsionPos(al::EffectSystem*, int, sead::Vector3<float> const&);
setNatureDirector(al::EffectSystem*, al::NatureDirector*);
resetNatureDirector(al::EffectSystem*);

} 
