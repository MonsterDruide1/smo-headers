#pragma once

namespace al { 

class HostSyncTowerCamera
{
public:
    HostSyncTowerCamera(al::LiveActor*, al::AreaObjGroup*, al::ActorInitInfo const&);
    update();
    activate();
    deactivate();
    tryEndCamera();
    exeActive();
    tryStartCamera();
    exeDeactive();
    ~HostSyncTowerCamera();
};

} 
