#pragma once

namespace nn { namespace atk { namespace detail { namespace VirtualVoiceManager {

GetInstance();
Initialize();
AllocVirtualVoice();
FreeVirtualVoice(unsigned int);
UpdateVoiceInfo();
GetAllocatedVirtualVoiceCount() const;
GetUnreleasedLowLevelVoiceCount() const;
InvalidVoiceId;
VirtualVoiceCount;
VirtualVoiceElementCount;

} } } } 
