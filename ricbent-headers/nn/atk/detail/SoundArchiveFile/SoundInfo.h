#pragma once

namespace nn { namespace atk { namespace detail { namespace SoundArchiveFile { namespace SoundInfo {

GetSoundType() const;
GetStreamSoundInfo() const;
GetStringId() const;
GetWaveSoundInfo() const;
GetAdvancedWaveSoundInfo() const;
GetSequenceSoundInfo() const;
GetSound3DInfo() const;
GetPanMode() const;
GetPanCurve() const;
GetSinglePlayType() const;
GetSinglePlayEffectiveDuration() const;
GetPlayerPriority() const;
GetActorPlayerId() const;
GetUserParam() const;
ReadUserParam(unsigned int*, int) const;
IsFrontBypass() const;

} } } } } 
