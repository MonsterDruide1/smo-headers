#pragma once

namespace agl { namespace fx { 

class OfxLensFlareDynamic
{
public:
    ~OfxLensFlareDynamic();
    OfxLensFlareDynamic();
    setParam(int, float, sead::Vector3<float> const&, sead::Vector2<float> const&, sead::Color4f const&, bool);
    loadPresetByParentIndex(int);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getTypeID() const;
    sTypeInfo;
};

} } 
