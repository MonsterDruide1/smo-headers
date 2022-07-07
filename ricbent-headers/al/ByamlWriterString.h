#pragma once

namespace al { 

class ByamlWriterString
{
public:
    ByamlWriterString(char const*, al::ByamlWriterStringTable*);
    getTypeCode() const;
    write(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterString();
};

} 
