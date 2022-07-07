#pragma once

namespace alActorFunction {

invalidateFarClipping(al::LiveActor*);
validateFarClipping(al::LiveActor*);
getFarClipDistance(al::LiveActor const*);
isInvalidFarClipping(al::LiveActor const*);
isDrawClipping(al::LiveActor const*);
checkActiveViewGroupAny(al::LiveActor const*);

} 
