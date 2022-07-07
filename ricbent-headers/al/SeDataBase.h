#pragma once

namespace al { 

class SeDataBase
{
public:
    create(char const*, char const*, al::AudioSoundArchiveInfo const*);
    SeDataBase(al::Resource*, al::Resource*, al::AudioSoundArchiveInfo const*);
    createResourceCategoryInfoList(al::Resource const*);
    createResourceSpecificInfoList(al::Resource const*, sead::ConstPtrArray<char> const&, al::AudioSoundArchiveInfo const*);
    createUserInfoList(al::Resource const*, sead::ConstPtrArray<char> const&);
    createStationedArchiveInfoList(al::Resource const*);
    createStageInfoList(al::Resource const*);
    createDemoSyncedProcInfoList(al::Resource const*);
    createSituationInfoList(al::Resource const*);
    setResourceSpecInfoToResourceInfo();
    tryGetStageInfo(char const*, int) const;
    setResourceIdToMeInfo();
};

} 
