#pragma once

namespace nn { namespace atk { 

class ProfileReader
{
public:
    ProfileReader();
    Read(nn::atk::SoundProfile*, int);
    Record(nn::atk::SoundProfile const&);
};

} } 
