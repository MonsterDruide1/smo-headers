#pragma once

namespace al { 

class ByamlWriterStringTable
{
public:
    ByamlWriterStringTable();
    ~ByamlWriterStringTable();
    tryAdd(char const*);
    calcHeaderSize() const;
    calcContentSize() const;
    calcPackSize() const;
    isEmpty() const;
    calcIndex(char const*) const;
    write(sead::WriteStream*) const;
    print() const;
};

} 
