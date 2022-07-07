#pragma once

namespace al { 

class ArchiveEntry
{
public:
    ArchiveEntry();
    load();
    setLoadRequestInfo(sead::SafeStringBase<char> const&, sead::Heap*, sead::FileDevice*);
    getArchiveRes();
    clear();
};

} 
