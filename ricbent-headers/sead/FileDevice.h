#pragma once

namespace sead { 

class FileDevice
{
public:
    traceFilePath(sead::SafeStringBase<char> const&) const;
    traceDirectoryPath(sead::SafeStringBase<char> const&) const;
    resolveFilePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    resolveDirectoryPath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    ~FileDevice();
    isAvailable() const;
    tryLoad(sead::FileDevice::LoadArg&);
    doLoad_(sead::FileDevice::LoadArg&);
    tryOpen(sead::FileHandle*, sead::SafeStringBase<char> const&, sead::FileDevice::FileOpenFlag, unsigned int);
    tryGetFileSize(unsigned int*, sead::FileHandle*);
    tryRead(unsigned int*, sead::FileHandle*, unsigned char*, unsigned int);
    tryClose(sead::FileHandle*);
    trySave(sead::FileDevice::SaveArg&);
    doSave_(sead::FileDevice::SaveArg&);
    tryWrite(unsigned int*, sead::FileHandle*, unsigned char const*, unsigned int);
    setFileHandleDivSize_(sead::FileHandle*, unsigned int) const;
    setHandleBaseFileDevice_(sead::HandleBase*, sead::FileDevice*) const;
    setHandleBaseOriginalFileDevice_(sead::HandleBase*, sead::FileDevice*) const;
    tryFlush(sead::FileHandle*);
    tryRemove(sead::SafeStringBase<char> const&);
    trySeek(sead::FileHandle*, int, sead::FileDevice::SeekOrigin);
    tryGetCurrentSeekPos(unsigned int*, sead::FileHandle*);
    tryGetFileSize(unsigned int*, sead::SafeStringBase<char> const&);
    tryOpenDirectory(sead::DirectoryHandle*, sead::SafeStringBase<char> const&);
    tryCloseDirectory(sead::DirectoryHandle*);
    tryReadDirectory(unsigned int*, sead::DirectoryHandle*, sead::DirectoryEntry*, unsigned int);
    tryIsExistFile(bool*, sead::SafeStringBase<char> const&);
    tryIsExistDirectory(bool*, sead::SafeStringBase<char> const&);
    tryMakeDirectory(sead::SafeStringBase<char> const&, unsigned int);
    tryMakeDirectoryWithParent(sead::SafeStringBase<char> const&, unsigned int);
    isMatchDevice_(sead::HandleBase const*) const;
    getLastRawError() const;
    getHandleBaseHandleBuffer_(sead::HandleBase*) const;
    doTracePath_(sead::SafeStringBase<char> const&) const;
    doResolvePath_(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    read(sead::FileHandle*, unsigned char*, unsigned int);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
