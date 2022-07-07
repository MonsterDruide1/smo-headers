#pragma once

namespace al { 

class ByamlStringTableIter
{
public:
    ByamlStringTableIter();
    ByamlStringTableIter(unsigned char const*, bool);
    getSize() const;
    getAddressTable() const;
    getStringAddress(int) const;
    getEndAddress() const;
    getString(int) const;
    getStringSize(int) const;
    findStringIndex(char const*) const;
    isValidate() const;
};

} 
