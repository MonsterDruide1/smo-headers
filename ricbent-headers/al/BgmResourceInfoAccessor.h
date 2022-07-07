#pragma once

namespace al { 

class BgmResourceInfoAccessor
{
public:
    BgmResourceInfoAccessor(al::AudioInfoListWithParts<al::BgmResourceInfo> const*, al::AudioSoundArchiveInfo const*);
    findResourceId(char const*) const;
    getResourceIdFromIndex(int) const;
    getResourceName(unsigned int) const;
    getResourceNameFromIndex(int) const;
    getResourceNum() const;
    getResourceIndexFromId(unsigned int) const;
    getArchiveIndexFromId(unsigned int) const;
    getArchiveName(unsigned int) const;
};

} 
