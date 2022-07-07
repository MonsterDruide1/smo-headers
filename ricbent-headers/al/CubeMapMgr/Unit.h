#pragma once

namespace al { namespace CubeMapMgr { 

class Unit
{
public:
    outputFile(agl::DrawContext*, sead::SafeStringBase<char> const&, al::CubeMapMgr::HDREncodeType, bool);
    Unit();
    ~Unit();
    initialize(sead::Heap*, al::CubeMapMgr*);
    initialize(sead::Heap*, al::CubeMapMgr*, agl::GPUMemVoidAddr, unsigned int, agl::GPUMemVoidAddr, unsigned int);
    initialize(sead::Heap*, al::CubeMapMgr*, agl::env::CubeMap*, agl::GPUMemVoidAddr, unsigned int);
    reformat(agl::TextureData const&);
    reformat(agl::TextureFormat, unsigned int, unsigned int);
};

} } 
