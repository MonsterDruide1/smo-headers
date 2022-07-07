#pragma once

namespace al { 

class ByamlWriterNull
{
public:
    ByamlWriterNull();
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterNull();
};

} 
