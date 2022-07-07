#pragma once

namespace al { 

class ByamlWriterUInt
{
public:
    ByamlWriterUInt(unsigned int);
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterUInt();
};

} 
