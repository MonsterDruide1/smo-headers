#pragma once

namespace al { 

class BgmSituationDirector
{
public:
    BgmSituationDirector(al::BgmDataBase*);
    update();
    forceEndSituation(al::BgmDirector*);
    tryAddHoldUpSituation(char const*);
    tryAddForceEndSituation(char const*);
    tryRemoveHoldUpSituation(char const*);
    tryRemoveForceEndSituation(char const*);
    clear();
    startHoldUpSituation(al::BgmDirector*);
    startSituation(char const*, bool, bool, bool);
    endSituation(char const*, bool, bool);
    disableSituationChange();
    enableSituationChange(bool);
    getActiveSituationName(int) const;
    getDeactiveSituationName(int) const;
    takeBgmSituationSnapShot();
    applyBgmSituationSnapShot();
    applyNoAppliedSituationRecord();
};

} 
