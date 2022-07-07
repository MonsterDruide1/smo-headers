#pragma once

namespace alSeDbFunction {

calcIsOneTimeInUserInfo(al::SeUserInfo const*);
convertInterpolateTypeToId(char const*);
convertInterpolateTypeIdToName(al::SeInterpolateTypeId);
applyResMainInfoSettingInPlayInfo(al::SePlayInfo const*, char const*);
calcRtpcParam(al::SeRtpcSetting const*, float);
calcRtpcVolumeMod(al::SeResourceRtpcInfo const*, float, bool);
createDefaultEmitterInfo(char const*);
createDefaultEmitterInfoList();
setPartsUserList(al::SeUserInfo const*, al::AudioInfoListWithParts<al::SeUserInfo> const*);
setDefaultEmitter(al::SeUserInfo const*, bool, bool);
setResourceSpecInfoToResourceInfo(al::SeUserInfo const*, al::AudioInfoListWithParts<al::SeResourceSpecificInfo> const*, bool);
tryFindSceneSeUserName(al::AudioSystemInfo const*, char const*, int);
findRtpcInputTypeByName(char const*);
findSeFluctuationTypeByName(char const*);
createNameAreaAndCopy(char const*);

} 
