#pragma once

namespace alPadRumbleFunction {

getPadRumbleDirector(al::LiveActor const*);
getPadRumbleDirector(al::LayoutActor const*);
startPadRumble(al::PadRumbleDirector*, sead::Vector3<float> const&, char const*, float, float, int);
startPadRumbleWithParam(al::PadRumbleDirector*, sead::Vector3<float> const&, char const*, al::PadRumbleParam const&, int);
startPadRumble(al::LiveActor const*, char const*, float, float, int);
startPadRumblePos(al::LiveActor const*, sead::Vector3<float> const&, char const*, float, float, int);
startPadRumbleWithParam(al::LiveActor const*, sead::Vector3<float> const&, char const*, al::PadRumbleParam const&, int);
startPadRumbleNo3D(al::PadRumbleDirector*, char const*, int);
startPadRumbleNo3DWithParam(al::PadRumbleDirector*, char const*, al::PadRumbleParam const&, int);
startPadRumbleNo3DWithParam(al::PadRumbleDirector*, char const*, float, float, float, float, int);
startPadRumbleNo3D(al::LiveActor const*, char const*, int);
startPadRumbleNo3DWithParam(al::LiveActor const*, char const*, al::PadRumbleParam const&, int);
startPadRumbleNo3DWithParam(al::LiveActor const*, char const*, float, float, float, float, int);
stopPadRumbleOneTime(al::PadRumbleDirector*, char const*, int);
stopPadRumbleOneTime(al::LiveActor const*, char const*, int);
startPadRumbleLoop(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, float, float, int);
startPadRumbleLoopWithParam(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
startPadRumbleLoop(al::LiveActor const*, char const*, sead::Vector3<float> const*, float, float, int);
startPadRumbleLoopWithParam(al::LiveActor const*, char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
startPadRumbleLoopNo3D(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, int);
startPadRumbleLoopNo3DWithParam(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
startPadRumbleLoopNo3D(al::LiveActor const*, char const*, sead::Vector3<float> const*, int);
startPadRumbleLoopNo3DWithParam(al::LiveActor const*, char const*, sead::Vector3<float> const*, al::PadRumbleParam const&, int);
stopPadRumbleLoop(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, int);
stopPadRumbleLoop(al::LiveActor const*, char const*, sead::Vector3<float> const*, int);
checkIsAlivePadRumbleLoop(al::PadRumbleDirector*, char const*, sead::Vector3<float> const*, int);
checkIsAlivePadRumbleLoop(al::LiveActor const*, char const*, sead::Vector3<float> const*, int);
startPadRumbleLoopControlable(al::LiveActor const*, char const*, sead::Vector3<float> const*, int);
changePadRumbleLoopVolmue(al::LiveActor const*, char const*, sead::Vector3<float> const*, float, float, int);
changePadRumbleLoopVolmueEaseInRange(al::LiveActor const*, char const*, sead::Vector3<float> const*, float, float, float, float, float, int);
changePadRumbleLoopPitch(al::LiveActor const*, char const*, sead::Vector3<float> const*, float, float, int);
startPadRumbleDirectValue(al::LiveActor const*, float, float, float, float, float, float, int);
stopPadRumbleDirectValue(al::LiveActor const*, int);
startPadRumbleWithVolume(al::LiveActor const*, char const*, float, float, int);
startPadRumbleWithVolume(al::PadRumbleDirector*, char const*, float, float, int);
makePadRumbleParamNearFarVolume(al::PadRumbleParam*, float, float, float);
makePadRumbleParamNearFarVolumeLR(al::PadRumbleParam*, float, float, float, float);
makePadRumbleParamNearFarVolumePitch(al::PadRumbleParam*, float, float, float, float);
makePadRumbleParamNearFarVolumePitchLR(al::PadRumbleParam*, float, float, float, float, float, float);

} 
