#pragma once

namespace al { 

class BgmParamsChanger
{
public:
    BgmParamsChanger();
    update();
    isReachedTargetAllController() const;
    resetParams();
    activate(char const*, char const*, bool);
    deactivate(bool);
    tryDeactivate(bool);
    resetForReuse();
    changeVolume(float, int);
    changePitchShift(float, int);
    changeLpf(float, int);
    changeBiquadFilter(float, int);
    changePitchShiftModulation(float, float, int);
    changeEffectSend(nn::atk::AuxBus, float, int);
    changeTrackVolume(int, float, int);
    changeDefaultParams(int);
    forceDeactivate();
    getCurVolume() const;
    getCurPitchShift() const;
    getCurPitchShiftModulation() const;
    getCurLpfCutOff() const;
    getBiquadFilterValue() const;
    getEffectSend() const;
    getEffectBusId() const;
    getCurTrackVolume(int) const;
    isActivate() const;
    isPaused() const;
    isEnableRegionChange() const;
    setRegionChangeParams(al::BgmRegionChangeParams const&);
    getSituationName() const;
    getSubSituationName() const;
    setSituationName(char const*);
    setSubSituationName(char const*);
    getRegionChangeParams() const;
};

} 
