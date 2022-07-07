#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class WaveSoundLoader
{
public:
    ~WaveSoundLoader();
    Initialize(nn::atk::detail::driver::WaveSoundLoader::Arg const&);
    Finalize();
    TryWait();
    IsInUse();
};

} } } } 
