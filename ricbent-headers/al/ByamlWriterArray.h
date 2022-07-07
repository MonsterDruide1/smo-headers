#pragma once

namespace al { 

class ByamlWriterArray
{
public:
    ByamlWriterArray(al::ByamlWriterStringTable*);
    ~ByamlWriterArray();
    deleteData();
    calcPackSize() const;
    addData(al::ByamlWriterData*);
    addBool(bool);
    addInt(int);
    addUInt(unsigned int);
    addFloat(float);
    addInt64(long, al::ByamlWriterBigDataList*);
    addUInt64(unsigned long, al::ByamlWriterBigDataList*);
    addDouble(double, al::ByamlWriterBigDataList*);
    addString(char const*);
    addHash(al::ByamlWriterHash*);
    addArray(al::ByamlWriterArray*);
    addNull();
    getTypeCode() const;
    writeContainer(sead::WriteStream*) const;
    write(sead::WriteStream*) const;
    print(int) const;
    isArray() const;
};

} 
