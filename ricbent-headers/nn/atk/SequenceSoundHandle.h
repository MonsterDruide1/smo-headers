#pragma once

namespace nn { namespace atk { 

class SequenceSoundHandle
{
public:
    SequenceSoundHandle(nn::atk::SoundHandle*);
    detail_AttachSoundAsTempHandle(nn::atk::detail::SequenceSound*);
    DetachSound();
    BankIndexMin;
    BankIndexMax;
    TransposeMin;
    TransposeMax;
    VelocityRangeMin;
    VelocityRangeMax;
    VariableIndexMax;
    TrackIndexMax;
};

} } 
