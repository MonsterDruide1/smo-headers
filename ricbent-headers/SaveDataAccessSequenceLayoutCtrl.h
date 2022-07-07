#pragma once

class SaveDataAccessSequenceLayoutCtrl
{
public:
    SaveDataAccessSequenceLayoutCtrl(al::LayoutInitInfo const&);
    update();
    isDone() const;
    startWrite();
    startWriteWithWindow();
    startDeleteWithWindow();
    exeIdle();
    exeWriteGame();
    exeWaitSaveLayout();
    exeSaveDoneLayout();
    exeSaveLayoutEnd();
    exeWriteGameWithWindow();
    exeWaitSaveLayoutWithWindow();
    exeSaveDoneLayoutWithWindow();
    setWindowSave();
    setWindowSwitch();
    setWindowDelete();
    ~SaveDataAccessSequenceLayoutCtrl();
};
