#pragma once

namespace sead { 

class SharcArchiveRes
{
public:
    SharcArchiveRes();
    ~SharcArchiveRes();
    prepareArchive_(void const*);
    getFileImpl_(sead::SafeStringBase<char> const&, sead::ArchiveRes::FileInfo*);
    getFileFastImpl_(int, sead::ArchiveRes::FileInfo*);
    convertPathToEntryIDImpl_(sead::SafeStringBase<char> const&);
    setCurrentDirectoryImpl_(sead::SafeStringBase<char> const&);
    openDirectoryImpl_(sead::SafeArray<unsigned char, 32>*, sead::SafeStringBase<char> const&);
    readDirectoryImpl_(sead::SafeArray<unsigned char, 32>*, sead::DirectoryEntry*, unsigned int);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    closeDirectoryImpl_(sead::SafeArray<unsigned char, 32>*);
    checkDerivedRuntimeTypeInfoStatic(sead::RuntimeTypeInfo::Interface const*);
};

} 
