#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace SequenceSoundLoader { 

class LoadInfo
{
public:
    LoadInfo(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*, nn::atk::detail::LoadItemInfo*, nn::atk::detail::LoadItemInfo*, nn::atk::SoundPlayer*);
};

} } } } } 
