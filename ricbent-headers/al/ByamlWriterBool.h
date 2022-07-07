#pragma once

namespace al { 

class ByamlWriterBool
{
public:
    ByamlWriterBool(bool);
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterBool();
};

} 
