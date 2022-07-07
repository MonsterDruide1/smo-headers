#pragma once

namespace nn { namespace atk { namespace detail {

Debug_GetWarningFlag(nn::atk::DebugWarningFlag);
Debug_GetDebugWarningFlagFromSoundType(nn::atk::detail::DebugSoundType);
Debug_GetSoundTypeString(nn::atk::detail::DebugSoundType);
DecodeDspAdpcm(long, nn::atk::AdpcmContext&, nn::audio::AdpcmParameter const&, void const*, unsigned long, short*);
g_DebugLogHookFunc;

} } } 
