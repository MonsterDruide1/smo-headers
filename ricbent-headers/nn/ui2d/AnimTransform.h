#pragma once

namespace nn { namespace ui2d { 

class AnimTransform
{
public:
    AnimTransform();
    ~AnimTransform();
    GetFrameSize() const;
    UpdateFrame(float);
    SetEnabled(bool);
    IsLoopData() const;
    IsWaitData() const;
    GetRuntimeTypeInfo() const;
};

} } 
