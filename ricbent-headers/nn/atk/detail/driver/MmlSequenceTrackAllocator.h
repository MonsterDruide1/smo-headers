#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class MmlSequenceTrackAllocator
{
public:
    AllocTrack(nn::atk::detail::driver::SequenceSoundPlayer*);
    FreeTrack(nn::atk::detail::driver::SequenceTrack*);
    Create(void*, unsigned long);
    Destroy();
    ~MmlSequenceTrackAllocator();
    GetAllocatableTrackCount() const;
};

} } } } 
