#pragma once

namespace nn { namespace atk { namespace detail { 

class StartInfoReader
{
public:
    StartInfoReader(nn::atk::SoundArchive::SoundInfo const&);
    Read(nn::atk::SoundStartable::StartInfo const*);
};

} } } 
