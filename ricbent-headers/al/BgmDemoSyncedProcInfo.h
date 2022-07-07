#pragma once

namespace al { 

class BgmDemoSyncedProcInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmDemoSyncedProcInfo const*, al::BgmDemoSyncedProcInfo const*);
    BgmDemoSyncedProcInfo();
    BgmDemoSyncedProcInfo(al::BgmDemoSyncedProcInfo const&);
};

} 
