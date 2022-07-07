#pragma once

namespace alSubActorFunction {

trySyncAlive(al::SubActorKeeper*);
trySyncDead(al::SubActorKeeper*);
trySyncClippingStart(al::SubActorKeeper*);
trySyncClippingEnd(al::SubActorKeeper*);
trySyncShowModel(al::SubActorKeeper*);
trySyncHideModel(al::SubActorKeeper*);
trySyncModelAlphaMask(al::SubActorKeeper*, float);
findSubActor(al::SubActorKeeper const*, char const*);

} 
