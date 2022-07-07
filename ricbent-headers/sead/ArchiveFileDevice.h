#pragma once

namespace sead { 

class ArchiveFileDevice
{
public:
    ArchiveFileDevice(sead::ArchiveRes*);
    tryLoadWithEntryID(int, sead::FileDevice::LoadArg&);
    tryOpenWithEntryID(sead::FileHandle*, int, sead::FileDevice::FileOpenFlag, unsigned int);
    tryConvertPathToEntryID(sead::SafeStringBase<char> const&);
    setCurrentDirectory(sead::SafeStringBase<char> const&);
    doGetFileSize_(unsigned int*, sead::SafeStringBase<char> const&);
    doGetFileSize_(unsigned int*, sead::FileHandle*);
    getArchiveFileHandle_(sead::FileHandle*);
    doIsExistFile_(bool*, sead::SafeStringBase<char> const&);
    doIsExistDirectory_(bool*, sead::SafeStringBase<char> const&);
    doLoadWithEntryID_(int, sead::FileDevice::LoadArg&);
    doLoad_(sead::FileDevice::LoadArg&);
    doOpen_(sead::FileHandle*, sead::SafeStringBase<char> const&, sead::FileDevice::FileOpenFlag);
    doOpenWithEntryID_(sead::FileHandle*, int, sead::FileDevice::FileOpenFlag);
    doConvertPathToEntryID_(sead::SafeStringBase<char> const&);
    doClose_(sead::FileHandle*);
    doFlush_(sead::FileHandle*);
    doRemove_(sead::SafeStringBase<char> const&);
    doRead_(unsigned int*, sead::FileHandle*, unsigned char*, unsigned int);
    doSeek_(sead::FileHandle*, int, sead::FileDevice::SeekOrigin);
    doGetCurrentSeekPos_(unsigned int*, sead::FileHandle*);
    doOpenDirectory_(sead::DirectoryHandle*, sead::SafeStringBase<char> const&);
    doCloseDirectory_(sead::DirectoryHandle*);
    doReadDirectory_(unsigned int*, sead::DirectoryHandle*, sead::DirectoryEntry*, unsigned int);
    doSetCurrentDirectory_(sead::SafeStringBase<char> const&);
    doMakeDirectory_(sead::SafeStringBase<char> const&, unsigned int);
    doGetLastRawError_() const;
    ~ArchiveFileDevice();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    doIsAvailable_() const;
    doWrite_(unsigned int*, sead::FileHandle*, unsigned char const*, unsigned int);
};

} 
