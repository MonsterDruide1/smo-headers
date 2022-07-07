#pragma once

namespace al { 

class PadRumbleDirector
{
public:
    PadRumbleDirector(al::PlayerHolder const*, al::CameraDirector const*);
    setWaveVibrationHolder(al::WaveVibrationHolder*);
    update();
    updateInfoListAll();
    startRumble(char const*, sead::Vector3<float> const&, al::PadRumbleParam const&, int);
    findDeadInfoOneTime();
    startRumbleNo3D(char const*, al::PadRumbleParam const&, int);
    stopPadRumbleOneTime(char const*, int);
    startRumbleLoop(char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
    findDeadInfo();
    startRumbleLoopNo3D(char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
    stopRumbleLoop(char const*, sead::Vector3<float> const*, int);
    findInfo(char const*, sead::Vector3<float> const*, int);
    checkIsAliveRumbleLoop(char const*, sead::Vector3<float> const*, int);
    stopAllRumble();
    clearAllInfoList();
    pause();
    endPause();
    changeRumbleLoopVolume(char const*, sead::Vector3<float> const*, float, float, int);
    updateInfoListLoop();
    changeRumbleLoopPitch(char const*, sead::Vector3<float> const*, float, float, int);
    startRumbleWithVolume(char const*, float, float, int);
    startRumbleDirectValue(float, float, float, float, float, float, int);
    stopRumbleDirectValue(int);
    updateInfoListOneTime();
    testStartPadRumbleWithVolumeNoActor(char const*, float, float);
};

} 
