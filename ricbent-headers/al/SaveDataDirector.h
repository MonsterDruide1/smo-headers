#pragma once

namespace al { 

class SaveDataDirector
{
public:
    SaveDataDirector(unsigned int, int);
    threadFunc();
    initCheckSaveData();
    requestInitSaveDir(char const*, unsigned int, unsigned int);
    initSaveDirSync(char const*, unsigned int, unsigned int);
    requestFormat(int, int);
    formatSync(int, int);
    requestRead(char const*, unsigned int, unsigned int);
    readSync(char const*, unsigned int, unsigned int);
    requestWrite(char const*, unsigned int, unsigned int, bool);
    requestFlush();
    writeSync(char const*, unsigned int, unsigned int);
    updateSequence();
    isDoneSequence() const;
    getWorkBuffer();
    getResult();
};

} 
