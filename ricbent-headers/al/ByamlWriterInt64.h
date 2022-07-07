#pragma once

namespace al { 

class ByamlWriterInt64
{
public:
    ByamlWriterInt64(long, al::ByamlWriterBigDataList*);
    getTypeCode() const;
    writeBigData(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterInt64();
};

} 
