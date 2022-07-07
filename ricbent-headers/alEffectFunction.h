#pragma once

namespace alEffectFunction {

tryFindEffectUser(al::EffectSystemInfo const*, char const*);
initResourceInfo(al::EffectSystemInfo const*, al::EffectResourceInfo*);
tryFindEffectResouceInfo(al::EffectSystemInfo const*, char const*);
emitEffectIfExist(al::IUseEffectKeeper*, char const*, sead::Vector3<float> const*);

} 
