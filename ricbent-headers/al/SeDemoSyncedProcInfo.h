#pragma once

namespace al { 

class SeDemoSyncedProcInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeDemoSyncedProcInfo const*, al::SeDemoSyncedProcInfo const*);
    SeDemoSyncedProcInfo();
    SeDemoSyncedProcInfo(al::SeDemoSyncedProcInfo const&);
};

} 
