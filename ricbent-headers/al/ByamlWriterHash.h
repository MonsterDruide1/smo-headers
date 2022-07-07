#pragma once

namespace al { 

class ByamlWriterHash
{
public:
    ByamlWriterHash(al::ByamlWriterStringTable*, al::ByamlWriterStringTable*);
    ~ByamlWriterHash();
    deleteData();
    calcPackSize() const;
    addData(char const*, al::ByamlWriterData*);
    addBool(char const*, bool);
    addInt(char const*, int);
    addUInt(char const*, unsigned int);
    addFloat(char const*, float);
    addInt64(char const*, long, al::ByamlWriterBigDataList*);
    addUInt64(char const*, unsigned long, al::ByamlWriterBigDataList*);
    addDouble(char const*, double, al::ByamlWriterBigDataList*);
    addString(char const*, char const*);
    addHash(char const*, al::ByamlWriterHash*);
    addArray(char const*, al::ByamlWriterArray*);
    addNull(char const*);
    getTypeCode() const;
    writeContainer(sead::WriteStream*) const;
    write(sead::WriteStream*) const;
    print(int) const;
    isHash() const;
};

} 
