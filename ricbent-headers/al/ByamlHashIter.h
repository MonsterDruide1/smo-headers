#pragma once

namespace al { 

class ByamlHashIter
{
public:
    ByamlHashIter();
    ByamlHashIter(unsigned char const*, bool);
    getSize() const;
    getPairTable() const;
    getDataByIndex(al::ByamlData*, int) const;
    getDataByKey(al::ByamlData*, int) const;
    findPair(int) const;
    getPairByIndex(int) const;
    getOffsetData(unsigned int) const;
};

} 
