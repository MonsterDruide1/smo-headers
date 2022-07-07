#pragma once

namespace eui { 

class ConstantBuffer
{
public:
    ConstantBuffer();
    ~ConstantBuffer();
    initialize(sead::Heap*, eui::ConstantBuffer::InitConfig const&);
    finalize();
    map();
    unmap();
    setToDrawInfo(nn::ui2d::DrawInfo*);
    setToDispStringBufferInitializeArg(nn::font::DispStringBuffer::InitializeArg*);
    setToDispStringBuffer(nn::font::DispStringBuffer*);
};

} 
