#pragma once

namespace al { namespace CubeMapMgr { 

class ReservedUnit
{
public:
    ReservedUnit();
    updateNodeMeta();
    clearIlluminantInfo();
    ~ReservedUnit();
    initialize(sead::Heap*, al::CubeMapMgr*, agl::GPUMemVoidAddr, unsigned int, agl::GPUMemVoidAddr, unsigned int);
    initialize(sead::Heap*, al::CubeMapMgr*, agl::env::CubeMap*, agl::GPUMemVoidAddr, unsigned int);
    sweep();
    setIlluminantInfo(unsigned int, al::CubeMapMgr::IlluminantInfoArg const&);
    getIlluminantInfo(al::CubeMapMgr::IlluminantInfoArg*, unsigned int) const;
    drawDebugSphere(agl::DrawContext*);
    drawIlluminant(agl::DrawContext*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, unsigned int*) const;
    preWrite_() const;
    postWrite_() const;
    preRead_();
    postRead_();
    rebindIlluminantInfo();
    updateTextureInfo(sead::hostio::Context*);
    setDebugInfo(al::CubeMapMgr::UnitDebugInfoArg const&);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenNodeEvent(sead::hostio::NodeEvent const*);
    initialize(sead::Heap*, al::CubeMapMgr*);
};

} } 
