#pragma once

namespace al { 

class CameraResourceHolder
{
public:
    CameraResourceHolder(char const*, int);
    tryInitCameraResource(al::Resource const*, int);
    tryFindParamResource(al::ByamlIter*, al::CameraTicketId const*, int) const;
    tryFindCameraParamList(al::ByamlIter*, al::PlacementId const*, char const*) const;
    calcEntranceCameraParamNum() const;
    tryFindCameraParamList(al::ByamlIter*, char const*, char const*) const;
    getEntranceCameraParamResource(al::ByamlIter*, int) const;
    findCameraResource(char const*) const;
    tryFindCameraResource(char const*) const;
    tryFindCameraResource(al::PlacementId const*) const;
};

} 
