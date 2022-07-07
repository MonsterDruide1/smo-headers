#pragma once

namespace al { 

class VastGridMeshDirector
{
public:
    VastGridMeshDirector(al::SceneCameraInfo const*);
    ~VastGridMeshDirector();
    setCullingViewProj(al::ViewInfo const&, sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*);
    setStereoPair(int, int);
    tryCreateAndGet(char const*, int, al::GridMeshType);
    findVastGridMesh(char const*) const;
    tryGetGridMesh(char const*);
    tryCreateAndGetAperture(char const*, int, al::GridMeshType);
    findApertureMesh(char const*) const;
    preDrawGraphics(al::SceneCameraInfo const*);
};

} 
