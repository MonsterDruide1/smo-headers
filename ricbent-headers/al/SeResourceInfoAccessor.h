#pragma once

namespace al { 

class SeResourceInfoAccessor
{
public:
    SeResourceInfoAccessor(al::AudioInfoListWithParts<al::SeResourceSpecificInfo> const*, al::AudioSoundArchiveInfo const*);
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
