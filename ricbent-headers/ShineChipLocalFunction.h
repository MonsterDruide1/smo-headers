#pragma once

namespace ShineChipLocalFunction {

tryValidateRouteGuidePoint(ShineChip*);
tryInvalidateRouteGuidePoint(ShineChip*);
tryCreateShineChipWatcherHolder(al::IUseSceneObjHolder const*);
entryShineChipWatcher(ShineChipWatcher*);
notifyShineChipGet(ShineChipWatcher*);
notifyShineChipGet(al::LiveActor const*);

} 
