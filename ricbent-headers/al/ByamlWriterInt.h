#pragma once

namespace al { 

class ByamlWriterInt
{
public:
    ByamlWriterInt(int);
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterInt();
};

} 
