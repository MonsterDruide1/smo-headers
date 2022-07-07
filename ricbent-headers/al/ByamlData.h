#pragma once

namespace al { 

class ByamlData
{
public:
    ByamlData();
    set(al::ByamlHashPair const*, bool);
    set(unsigned char, unsigned int, bool);
    getType() const;
    getValue() const;
};

} 
