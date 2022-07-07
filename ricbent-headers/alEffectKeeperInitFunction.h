#pragma once

namespace alEffectKeeperInitFunction {

setupModelToEffectKeeper(al::EffectKeeper*, al::ModelKeeper const*);
setupLayoutToEffectKeeper(al::EffectKeeper*, al::IUseLayout const*);
setupCameraToEffectKeeper(al::EffectKeeper*, al::IUseCamera const*);
updateNamedMtxPtr(al::EffectKeeper*, char const*);

} 
