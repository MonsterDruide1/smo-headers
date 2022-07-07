#pragma once

namespace eui { 

class Animator
{
public:
    Animator();
    ~Animator();
    SetupBasic(nn::ui2d::AnimResource const&, eui::LayoutEx*, bool);
    SetupWithPane(nn::ui2d::AnimResource const&, eui::LayoutEx*, nn::ui2d::Pane*, bool);
    SetupWithGroup(nn::ui2d::AnimResource const&, eui::LayoutEx*, nn::ui2d::Group*, bool);
    SetupWithGroupIndex(nn::ui2d::AnimResource const&, eui::LayoutEx*, nn::ui2d::GroupContainer*, unsigned int, bool);
    SetupWithGroupAll(nn::ui2d::AnimResource const&, eui::LayoutEx*, nn::ui2d::GroupContainer*, bool);
    Play(eui::Animator::PlayType, float);
    PlayAuto(float);
    PlayFromCurrent(eui::Animator::PlayType, float);
    PlayFromFrame(float, eui::Animator::PlayType, float);
    PlayRandom(eui::Animator::PlayType, float);
    Synchronize(eui::Animator const&);
    Stop(float);
    StopCurrent();
    StopAtMin();
    StopAtMax();
    SetEnabled(bool);
    DisableAndEraseFromActiveList();
    UpdateFrame(float);
    GetRuntimeTypeInfo() const;
};

} 
