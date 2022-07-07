#pragma once

namespace sead { 

class NinFileDeviceBase
{
public:
    ~NinFileDeviceBase();
    doIsAvailable_() const;
    NinFileDeviceBase(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
    doOpen_(sead::FileHandle*, sead::SafeStringBase<char> const&, sead::FileDevice::FileOpenFlag);
    getFileHandleInner_(sead::HandleBase*) const;
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
    getDirHandleInner_(sead::HandleBase*) const;
    doCloseDirectory_(sead::DirectoryHandle*);
    doReadDirectory_(unsigned int*, sead::DirectoryHandle*, sead::DirectoryEntry*, unsigned int);
    doMakeDirectory_(sead::SafeStringBase<char> const&, unsigned int);
    doGetLastRawError_() const;
    formatPathForFS_(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    doResolvePath_(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
