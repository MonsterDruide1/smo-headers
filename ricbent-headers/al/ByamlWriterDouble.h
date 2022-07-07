#pragma once

namespace al { 

class ByamlWriterDouble
{
public:
    ByamlWriterDouble(double, al::ByamlWriterBigDataList*);
    getTypeCode() const;
    writeBigData(sead::WriteStream*) const;
    print(int) const;
    ~ByamlWriterDouble();
};

} 
