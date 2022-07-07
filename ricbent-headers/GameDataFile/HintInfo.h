#pragma once

namespace GameDataFile { namespace HintInfo {

clear();
isDisableByWorldWarpHole(bool) const;
isEnableUnlock(int, bool, int, bool) const;
isHintStatusUnlock(int, int, bool) const;
isHintStatusUnlockByNpc() const;
isHintStatusUnlockByAmiibo() const;
isEnableNameUnlockByScenario(int, int, bool) const;

} } 
