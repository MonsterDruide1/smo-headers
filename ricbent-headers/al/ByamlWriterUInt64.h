#pragma once

namespace al { 

class ByamlWriterUInt64
{
public:
    ByamlWriterUInt64(unsigned long, al::ByamlWriterBigDataList*);
    getTypeCode() const;
    writeBigData(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterUInt64();
};

} 
