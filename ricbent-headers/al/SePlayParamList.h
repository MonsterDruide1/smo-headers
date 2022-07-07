#pragma once

namespace al { 

class SePlayParamList
{
public:
    SePlayParamList();
    reset();
    setVolume(float);
    findAvailableRecord(int, int) const;
    setPitch(float);
    setTempo(float);
    setFxSend(float);
    setLpfFreq(float);
    setBiquadFilter(float, int);
    setLocalVariable(int, int);
    setGlobalVariable(int, int);
    setRtpcVolume(float, float, char const*);
    setRtpcVolumeSub(float, float, char const*);
    setRtpcPitch(float, float, char const*);
    setRtpcPitchSub(float, float, char const*);
    setRtpcTempo(float, float, char const*);
    setRtpcFxSend(float, float, char const*);
    setRtpcLpfFreq(float, float, char const*);
    tryGetLocalVariable(int&, int) const;
    getParam(int) const;
    getRtpcVolume() const;
    getRtpcVolumeSub() const;
    getRtpcPitch() const;
    getRtpcPitchSub() const;
    getRtpcTempo() const;
    getRtpcFxSend() const;
    getRtpcLpfFreq() const;
    isParamEmpty() const;
};

} 
