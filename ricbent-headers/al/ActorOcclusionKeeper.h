#pragma once

namespace al { 

class ActorOcclusionKeeper
{
public:
    isExistFile(al::Resource const*, char const*);
    ActorOcclusionKeeper(al::GraphicsSystemInfo const*, al::Resource const*, al::LiveActor const*, char const*);
    appear(bool);
    requestKill();
    hideModel();
    calcDirectionalLight(sead::Vector3<float>*) const;
    calcSystemConeDegree() const;
    updateAndRequest();
    getOccSphere(char const*);
};

} 
