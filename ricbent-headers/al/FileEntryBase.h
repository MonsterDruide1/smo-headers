#pragma once

namespace al { 

class FileEntryBase
{
public:
    FileEntryBase();
    setFileName(sead::SafeStringBase<char> const&);
    getFileName() const;
    sendMessageDone();
    waitLoadDone();
    clear();
    setLoadStateRequested();
};

} 
