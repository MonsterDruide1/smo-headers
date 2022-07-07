#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class BasicSoundPlayer
{
public:
    BasicSoundPlayer();
    Initialize();
    Finalize();
    SetBiquadFilter(int, float);
    ~BasicSoundPlayer();
};

} } } } 
