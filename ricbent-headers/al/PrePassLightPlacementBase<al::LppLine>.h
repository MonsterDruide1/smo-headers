#pragma once

namespace al { namespace PrePassLightPlacementBase<al::LppLine> {

init(al::ActorInitInfo const&);
makeActorAlive();
makeActorDead();
startClipped();
endClipped();
control();

} } 
