#pragma once

namespace al { 

class Resource
{
public:
    Resource(sead::SafeStringBase<char> const&);
    Resource(sead::SafeStringBase<char> const&, sead::ArchiveRes*);
    isExistFile(sead::SafeStringBase<char> const&) const;
    isExistByml(char const*) const;
    getSize() const;
    getEntryNum(sead::SafeStringBase<char> const&) const;
    getEntryName(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&, unsigned int) const;
    getFileSize(sead::SafeStringBase<char> const&) const;
    getByml(sead::SafeStringBase<char> const&) const;
    getFile(sead::SafeStringBase<char> const&) const;
    tryGetByml(sead::SafeStringBase<char> const&) const;
    getKcl(sead::SafeStringBase<char> const&) const;
    tryGetKcl(sead::SafeStringBase<char> const&) const;
    getPa(sead::SafeStringBase<char> const&) const;
    tryGetPa(sead::SafeStringBase<char> const&) const;
    getOtherFile(sead::SafeStringBase<char> const&) const;
    getArchiveName() const;
    tryCreateResGraphicsFile(sead::SafeStringBase<char> const&, nn::g3d::ResFile*);
    cleanupResGraphicsFile();
};

} 
