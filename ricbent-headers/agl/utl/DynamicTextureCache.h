#pragma once

namespace agl { namespace utl { 

class DynamicTextureCache
{
public:
    DynamicTextureCache();
    ~DynamicTextureCache();
    initialize(int, sead::Heap*);
    begin();
    end();
    pushBack_(agl::TextureData*);
    popFront_(agl::DrawContext*);
    alloc(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    allocArray(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    alloc3D(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    allocCube(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    allocCubeArray(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    allocMultiSample(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::MultiSampleType, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureCache::AllocateType, bool);
    free(agl::TextureData*);
};

} } 
