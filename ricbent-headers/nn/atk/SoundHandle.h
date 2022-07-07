#pragma once

namespace nn { namespace atk { namespace SoundHandle {

detail_DuplicateHandle(nn::atk::SoundHandle*);
DetachSound();
detail_AttachSoundAsTempHandle(nn::atk::detail::BasicSound*);
detail_AttachSound(nn::atk::detail::BasicSound*);
CalculateSoundParamCalculationValues(nn::atk::SoundParamCalculationValues*) const;

} } } 
