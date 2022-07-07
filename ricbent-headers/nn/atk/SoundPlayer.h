#pragma once

namespace nn { namespace atk { 

class SoundPlayer
{
public:
    SoundPlayer();
    ~SoundPlayer();
    StopAllSound(int);
    Update();
    DoFreePlayerHeap();
    detail_SortPriorityList(bool);
    PauseAllSound(bool, int);
    PauseAllSound(bool, int, nn::atk::PauseMode);
    SetVolume(float);
    SetLowPassFilterFrequency(float);
    SetBiquadFilter(int, float);
    SetDefaultOutputLine(unsigned int);
    SetOutputVolume(nn::atk::OutputDevice, float);
    RemoveSoundList(nn::atk::detail::BasicSound*);
    InsertPriorityList(nn::atk::detail::BasicSound*);
    RemovePriorityList(nn::atk::detail::BasicSound*);
    detail_SortPriorityList(nn::atk::detail::BasicSound*);
    detail_AppendSound(nn::atk::detail::BasicSound*);
    detail_RemoveSound(nn::atk::detail::BasicSound*);
    SetPlayableSoundCount(int);
    detail_SetPlayableSoundLimit(int);
    detail_CanPlaySound(int);
    detail_AppendPlayerHeap(nn::atk::detail::PlayerHeap*);
    detail_AllocPlayerHeap();
    detail_FreePlayerHeap(nn::atk::detail::PlayerHeap*);
};

} } 
