#pragma once

namespace al { 

class ArchiveHolder
{
public:
    ArchiveHolder();
    addNewLoadRequestEntry(sead::SafeStringBase<char> const&, sead::Heap*, sead::FileDevice*);
    tryFindEntry(sead::SafeStringBase<char> const&);
    waitLoadDoneAll();
    clearEntry();
};

} 
