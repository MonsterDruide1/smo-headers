#pragma once

namespace al { 

class FileLoader
{
public:
    FileLoader(int);
    listSubdirectories(sead::FixedSafeString<256>*, int, char const*);
    listFiles(sead::FixedSafeString<256>*, int, char const*, char const*);
    isExistFile(sead::SafeStringBase<char> const&, sead::FileDevice*) const;
    getFileDevice(sead::SafeStringBase<char> const&, sead::FileDevice*) const;
    isExistArchive(sead::SafeStringBase<char> const&, sead::FileDevice*) const;
    isExistDirectory(sead::SafeStringBase<char> const&, sead::FileDevice*) const;
    getFileSize(sead::SafeStringBase<char> const&, sead::FileDevice*) const;
    loadFile(sead::SafeStringBase<char> const&, int, sead::FileDevice*);
    tryLoadFileToBuffer(sead::SafeStringBase<char> const&, unsigned char*, unsigned int, int, sead::FileDevice*);
    loadArchive(sead::SafeStringBase<char> const&, sead::FileDevice*);
    loadArchiveLocal(sead::SafeStringBase<char> const&, char const*, sead::FileDevice*);
    loadArchiveWithExt(sead::SafeStringBase<char> const&, char const*, sead::FileDevice*);
    tryRequestLoadArchive(sead::SafeStringBase<char> const&, sead::Heap*, sead::FileDevice*);
    requestLoadArchive(sead::SafeStringBase<char> const&, sead::Heap*, sead::FileDevice*);
    loadSoundItem(unsigned int, unsigned int, al::IAudioResourceLoader*);
    requestLoadSoundItem(unsigned int, unsigned int, al::IAudioResourceLoader*);
    tryRequestLoadSoundItem(unsigned int, al::IAudioResourceLoader*);
    requestPreLoadFile(al::ByamlIter const&, sead::Heap*, al::IAudioResourceLoader*);
    waitLoadDoneAllFile();
    clearAllEntry();
    setThreadPriority(int);
};

} 
