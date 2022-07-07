#pragma once

namespace al { 

class ByamlWriterBigDataList
{
public:
    ByamlWriterBigDataList();
    ~ByamlWriterBigDataList();
    addData(al::ByamlWriterBigData*);
    calcPackSize() const;
    setOffset(int);
    write(sead::WriteStream*);
};

} 
