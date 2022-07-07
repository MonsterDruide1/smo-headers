#pragma once

namespace alYamlMacroUtil { 

class IUseYamlParam
{
public:
    setPtr_u8(unsigned char*);
    setPtr_u16(unsigned short*);
    setPtr_s16(short*);
    setPtr_V2f(sead::Vector2<float>*);
    setPtr_V3f(sead::Vector3<float>*);
    setPtr_YamlColor(sead::Color4f*);
    setPtr_s32(int*);
    setPtr_f32(float*);
    setPtr_bool(bool*);
    setPtr_YamlString(char const**);
    IUseYamlParam(char const*);
    isEqualParamName(char const*) const;
};

} 
