#pragma once

namespace al { 

class ByamlArrayIter
{
public:
    ByamlArrayIter();
    ByamlArrayIter(unsigned char const*, bool);
    getSize() const;
    getTypeTable() const;
    getDataTable() const;
    getDataByIndex(al::ByamlData*, int) const;
    getOffsetData(unsigned int) const;
};

} 
