#pragma once

namespace sead { 

class FileDeviceMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    FileDeviceMgr();
    mount_(sead::Heap*);
    mount(sead::FileDevice*, sead::SafeStringBase<char> const&);
    ~FileDeviceMgr();
    unmount_();
    mountSaveDataForDebug(sead::Heap*);
    unmountSaveDataForDebug();
    unmount(sead::SafeStringBase<char> const&);
    findDevice(sead::SafeStringBase<char> const&) const;
    unmount(sead::FileDevice*);
    tryOpen(sead::FileHandle*, sead::SafeStringBase<char> const&, sead::FileDevice::FileOpenFlag, unsigned int);
    findDeviceFromPath(sead::SafeStringBase<char> const&, sead::BufferedSafeStringBase<char>*) const;
    tryOpenDirectory(sead::DirectoryHandle*, sead::SafeStringBase<char> const&);
    tryLoad(sead::FileDevice::LoadArg&);
    trySave(sead::FileDevice::SaveArg&);
    unload(unsigned char*);
    traceFilePath(sead::SafeStringBase<char> const&) const;
    traceDirectoryPath(sead::SafeStringBase<char> const&) const;
    resolveFilePath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    resolveDirectoryPath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    sInstance;
};

} 
