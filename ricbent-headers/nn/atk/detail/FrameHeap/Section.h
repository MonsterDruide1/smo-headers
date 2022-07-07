#pragma once

namespace nn { namespace atk { namespace detail { namespace FrameHeap { 

class Section
{
public:
    AppendBlock(nn::atk::detail::FrameHeap::Block*);
    Section();
    ~Section();
    Dump(nn::atk::SoundDataManager const&, nn::atk::SoundArchive const&) const;
};

} } } } 
