#pragma once

namespace al { namespace PrePassLightPlacementBase<al::LppCaustics> {

init(al::ActorInitInfo const&);
makeActorAlive();
makeActorDead();
startClipped();
endClipped();
control();

} } 
