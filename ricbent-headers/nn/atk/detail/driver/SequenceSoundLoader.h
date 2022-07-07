#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class SequenceSoundLoader
{
public:
    Initialize(nn::atk::detail::driver::SequenceSoundLoader::Arg const&);
    TryWait();
    ~SequenceSoundLoader();
    Finalize();
    IsInUse();
};

} } } } 
