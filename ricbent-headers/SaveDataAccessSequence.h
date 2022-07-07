#pragma once

class SaveDataAccessSequence
{
public:
    SaveDataAccessSequence(GameDataHolder*, al::LayoutInitInfo const&);
    update();
    isDone() const;
    startInit();
    startInitSync();
    startReadSync();
    startReadAll();
    addRequest(sead::FixedSafeString<32>*, sead::FixedSafeString<32>*, int);
    getFileNamePtrByIndex(int) const;
    startWrite();
    getPlayingFileNamePtr() const;
    getFileNameCommon() const;
    startWriteSync();
    startWriteWithWindow();
    startCopyWithWindow(int, int);
    startDeleteWithWindow(int);
    exeIdle();
    exeInit();
    exeWaitLayout();
    exeWrite();
    clearAllRequest();
    isNextFileCommon() const;
    getNextFileNameSrc() const;
    getNextFileNameDest() const;
    clearCurrentRequest();
    tryChangeNextNerve();
    exeFlush();
    exeRead();
    isEnableSave() const;
    isDoneSave() const;
    setWindowSave();
    setWindowSwitch();
    setWindowDelete();
    isExistRequest() const;
    ~SaveDataAccessSequence();
};
