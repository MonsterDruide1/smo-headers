#pragma once

namespace nn { namespace atk { namespace detail { namespace LowLevelVoiceCommand {

GetInstance();
Initialize(void*, unsigned long, void*, unsigned long, int);
ProcessCommandList(nn::atk::detail::Command*);
GetRequiredWaveBufferMemSize(int);
LowLevelVoiceDisposeCallback(nn::atk::detail::LowLevelVoice*, void*);
GetFreeWaveBuffer();

} } } } 
