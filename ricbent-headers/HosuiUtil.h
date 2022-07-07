#pragma once

namespace HosuiUtil {

tryCreateTrailKeeper(al::IUseSceneObjHolder const*, al::ActorInitInfo const&);
tryAppearTrail(al::IUseSceneObjHolder const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
forceKillAllTrail(al::IUseSceneObjHolder const*);
tryCreateHosuiWaterBallHolder(al::IUseSceneObjHolder const*, al::ActorInitInfo const&);
tryGetHosuiWaterBall(al::IUseSceneObjHolder const*);
killAllHosuiWaterBall(al::IUseSceneObjHolder const*);

} 
