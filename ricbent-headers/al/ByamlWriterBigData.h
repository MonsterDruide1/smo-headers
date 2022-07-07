#pragma once

namespace al { 

class ByamlWriterBigData
{
public:
    ByamlWriterBigData(al::ByamlWriterBigDataList*);
    write(sead::WriteStream*) const;
    ~ByamlWriterBigData();
    calcBigDataSize() const;
    writeBigData(sead::WriteStream*) const;
};

} 
