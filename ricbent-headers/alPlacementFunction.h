#pragma once

namespace alPlacementFunction {

getCameraId(al::ActorInitInfo const&);
getLinkGroupId(al::PlacementId*, al::ActorInitInfo const&, char const*);
isEnableLinkGroupId(al::ActorInitInfo const&, char const*);
isEnableGroupClipping(al::ActorInitInfo const&);
getClippingGroupId(al::PlacementId*, al::ActorInitInfo const&);
createClippingViewId(al::PlacementInfo const&);
getClippingViewId(al::PlacementId*, al::PlacementInfo const&);
getClippingViewId(al::PlacementId*, al::ActorInitInfo const&);
getModelName(char const**, al::ActorInitInfo const&);
getModelName(char const**, al::PlacementInfo const&);
tryGetModelName(char const**, al::PlacementInfo const&);
tryGetModelName(char const**, al::ActorInitInfo const&);

} 
