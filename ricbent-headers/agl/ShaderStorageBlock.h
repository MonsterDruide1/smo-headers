#pragma once

namespace agl { 

class ShaderStorageBlock
{
public:
    ShaderStorageBlock();
    ~ShaderStorageBlock();
    getStrideArray_(unsigned char) const;
    getData_(void*, int, int) const;
    getDataStruct_(void*, int, int, unsigned int) const;
    invalidateGPUCache(agl::DrawContext*, int) const;
    getBlockAlignment_() const;
    getBlockSizeMax_() const;
    verifyStructSize_(unsigned int) const;
    bindBufferNVN_(NVNcommandBuffer*, NVNshaderStage, int, unsigned long, unsigned long) const;
};

} 
