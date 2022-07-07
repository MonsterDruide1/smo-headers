#pragma once

namespace nn { namespace nex { 

class MD5
{
public:
    update(unsigned char const*, unsigned long);
    finalize();
    MD5();
    init();
    raw_digest(unsigned char*);
    hex_digest();
};

} } 
