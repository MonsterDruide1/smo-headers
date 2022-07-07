#pragma once

namespace nn { namespace atk { namespace detail { 

class AddonSoundArchiveContainer
{
public:
    AddonSoundArchiveContainer();
    ~AddonSoundArchiveContainer();
    Initialize(char const*, nn::atk::AddonSoundArchive const*, nn::atk::SoundDataManager const*);
    Finalize();
    IsSameName(char const*) const;
    SetAddTick(nn::os::Tick const&);
    SoundArchiveNameCountMax;
};

} } } 
