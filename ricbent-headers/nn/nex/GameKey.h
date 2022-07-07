#pragma once

namespace nn { namespace nex { 

class GameKey
{
public:
    GameKey(unsigned long, unsigned short);
    operator==(nn::nex::GameKey const&) const;
    operator!=(nn::nex::GameKey const&) const;
    ~GameKey();
};

} } 
