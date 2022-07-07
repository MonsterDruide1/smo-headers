#pragma once

namespace al { 

class ByamlWriterFloat
{
public:
    ByamlWriterFloat(float);
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterFloat();
};

} 
