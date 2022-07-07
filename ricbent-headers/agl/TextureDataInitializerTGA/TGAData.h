#pragma once

namespace agl { namespace TextureDataInitializerTGA { 

class TGAData
{
public:
    TGAData(void const*, bool);
    copy(unsigned char*, unsigned char const*, int, int, int, int);
};

} } 
