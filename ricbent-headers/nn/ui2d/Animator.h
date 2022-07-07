#pragma once

namespace nn { namespace ui2d { 

class Animator
{
public:
    Animator();
    ~Animator();
    Play(nn::ui2d::Animator::PlayType, float);
    PlayAuto(float);
    PlayFromCurrent(nn::ui2d::Animator::PlayType, float);
    StopAt(float);
    StopAtCurrentFrame();
    StopAtStartFrame();
    StopAtEndFrame();
    UpdateFrame(float);
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} } 
