#pragma once

namespace al { 

class YamlFormatter
{
public:
    YamlFormatter();
    ~YamlFormatter();
    startDocument();
    writeString(char const*, ...);
    startHash(char const*);
    writeIndent();
    endHash();
    startArray();
    endArray();
    writeHashBool(char const*, bool);
    writeHashInt(char const*, int);
    writeHashUInt(char const*, unsigned int);
    writeHashFloat(char const*, float);
    writeHashInt64(char const*, long);
    writeHashUInt64(char const*, unsigned long);
    writeHashDouble(char const*, double);
    writeHashString(char const*, char const*);
    writeBlockString(char const*, char const*);
    writeHashV2f(char const*, sead::Vector2<float> const&);
    writeHashV2s32(char const*, sead::Vector2<int> const&);
    writeHashV3f(char const*, sead::Vector3<float> const&);
    writeHashV4f(char const*, sead::Vector4<float> const&);
    writeHashBox3f(char const*, sead::BoundBox3<float> const&);
    writeHashColor(char const*, sead::Color4f const&);
    writeHashNull(char const*);
    writeArrayBool(bool);
    writeArrayInt(int);
    writeArrayUInt(unsigned int);
    writeArrayFloat(float);
    writeArrayString(char const*);
    writeArrayInt64(long);
    writeArrayUInt64(unsigned long);
    writeArrayDouble(double);
    setStream(sead::WriteStream*);
};

} 
