#pragma once

namespace agl { 

class UniformBlock
{
public:
    setUniform(agl::DrawContext*, unsigned long const&, agl::ShaderLocation const&, unsigned int, unsigned long) const;
    UniformBlock();
    ~UniformBlock();
    destroy();
    startDeclare(int, sead::Heap*);
    getStrideArray_(unsigned char) const;
    declare_(agl::UniformBlock::Type, int, unsigned long, unsigned long);
    declare(agl::UniformBlock const&);
    calcRequiredBufferSize(int, int) const;
    create(sead::Heap*, int, int);
    setBuffer(agl::GPUMemVoidAddr, int, int);
    createWithBuffer(agl::GPUMemVoidAddr, int, int);
    createWithoutBuffer();
    createDirect(agl::GPUMemVoidAddr, unsigned long);
    copyAllTo(agl::UniformBlock*, int, int) const;
    copyPartialTo(agl::UniformBlock*, int, int, int, int, int, int) const;
    fill(unsigned int, int);
    writeMemory(unsigned int*, unsigned int const*, int, int, int, void const*);
    setData_(void*, int, void const*, int, int) const;
    setDataStruct_(void*, int, void const*, int, int, unsigned int) const;
    dcbz(int) const;
    dcbz(unsigned int, int) const;
    invalidateGPUCache(agl::DrawContext*, int) const;
    getBlockAlignment_() const;
    getBlockSizeMax_() const;
    verifyStructSize_(unsigned int) const;
    bindBufferNVN_(NVNcommandBuffer*, NVNshaderStage, int, unsigned long, unsigned long) const;
};

} 
