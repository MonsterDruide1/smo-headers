#pragma once

namespace al { namespace ByamlWriterContainer {

isContainer() const;
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
isArray() const;
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
isHash() const;

} } 
