#pragma once

namespace al { 

class ByamlWriter
{
public:
    ByamlWriter(sead::Heap*, bool);
    ~ByamlWriter();
    addBool(bool);
    getArrayCurrentContainer();
    addInt(int);
    addUInt(unsigned int);
    addFloat(float);
    addInt64(long);
    addUInt64(unsigned long);
    addDouble(double);
    addString(char const*);
    addNull();
    addBool(char const*, bool);
    getHashCurrentContainer();
    addInt(char const*, int);
    addUInt(char const*, unsigned int);
    addFloat(char const*, float);
    addInt64(char const*, long);
    addUInt64(char const*, unsigned long);
    addDouble(char const*, double);
    addString(char const*, char const*);
    addNull(char const*);
    pushHash();
    pushContainer(al::ByamlWriterContainer*);
    pushArray();
    pushHash(char const*);
    pushArray(char const*);
    pop();
    pushIter(al::ByamlIter const&);
    pushLocalIter(al::ByamlIter const&, char const*);
    pushIter(char const*, al::ByamlIter const&);
    calcHeaderSize() const;
    calcPackSize() const;
    write(sead::WriteStream*);
    print() const;
    getCurrentContainer();
};

} 
