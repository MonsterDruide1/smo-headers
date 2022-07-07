#pragma once

namespace sead { 

class MainFileDevice
{
public:
    MainFileDevice(sead::Heap*);
    ~MainFileDevice();
    traceFilePath(sead::SafeStringBase<char> const&) const;
    traceDirectoryPath(sead::SafeStringBase<char> const&) const;
    resolveFilePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    resolveDirectoryPath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    isMatchDevice_(sead::HandleBase const*) const;
    doIsAvailable_() const;
    doOpen_(sead::FileHandle*, sead::SafeStringBase<char> const&, sead::FileDevice::FileOpenFlag);
    doClose_(sead::FileHandle*);
    doFlush_(sead::FileHandle*);
    doRemove_(sead::SafeStringBase<char> const&);
    doRead_(unsigned int*, sead::FileHandle*, unsigned char*, unsigned int);
    doWrite_(unsigned int*, sead::FileHandle*, unsigned char const*, unsigned int);
    doSeek_(sead::FileHandle*, int, sead::FileDevice::SeekOrigin);
    doGetCurrentSeekPos_(unsigned int*, sead::FileHandle*);
    doGetFileSize_(unsigned int*, sead::SafeStringBase<char> const&);
    doGetFileSize_(unsigned int*, sead::FileHandle*);
    doIsExistFile_(bool*, sead::SafeStringBase<char> const&);
    doIsExistDirectory_(bool*, sead::SafeStringBase<char> const&);
    doOpenDirectory_(sead::DirectoryHandle*, sead::SafeStringBase<char> const&);
    doCloseDirectory_(sead::DirectoryHandle*);
    doReadDirectory_(unsigned int*, sead::DirectoryHandle*, sead::DirectoryEntry*, unsigned int);
    doMakeDirectory_(sead::SafeStringBase<char> const&, unsigned int);
    doGetLastRawError_() const;
};

} 
