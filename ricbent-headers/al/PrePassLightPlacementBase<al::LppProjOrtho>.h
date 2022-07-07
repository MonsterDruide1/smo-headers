#pragma once

namespace al { namespace PrePassLightPlacementBase<al::LppProjOrtho> {

init(al::ActorInitInfo const&);
makeActorAlive();
makeActorDead();
startClipped();
endClipped();
control();

} } 
