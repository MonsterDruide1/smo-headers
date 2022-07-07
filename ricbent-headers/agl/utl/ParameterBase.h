#pragma once

namespace agl { namespace utl { 

class ParameterBase
{
public:
    ~ParameterBase();
    calcBinarizeSize() const;
    isBinary() const;
    isBinaryInternalBuffer() const;
    ParameterBase();
    initializeListNode(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    ParameterBase(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    ParameterBase(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::IParameterObj*);
    calcHash(sead::SafeStringBase<char> const&);
    getParameterName() const;
    getLabel() const;
    getMeta() const;
    writeToXML(sead::XmlElement*, sead::Heap*) const;
    getTagName();
    getAttributeNameString();
    getAttributeTypeString();
    getParameterTypeName(agl::utl::ParameterBase::ParameterType);
    getAttributeValueString();
    isSafeType(agl::utl::ParameterBase::ParameterType) const;
    verifyType(agl::utl::ParameterBase::ParameterType) const;
    applyResource(agl::utl::ResParameter);
    applyResource(agl::utl::ResParameter, float);
    readFromXML(sead::XmlElement const&, bool);
    applyString(sead::SafeStringBase<char> const&, bool);
    isInterpolatable() const;
    makeZero();
    copy(agl::utl::ParameterBase const&);
    copyUnsafe(agl::utl::ParameterBase const&);
    copyLerp_<float>(agl::utl::ParameterBase const&, agl::utl::ParameterBase const&, float);
    copyLerp_<sead::Quat<float> >(agl::utl::ParameterBase const&, agl::utl::ParameterBase const&, float);
    copyLerp(agl::utl::ParameterBase const&, agl::utl::ParameterBase const&, float);
    genMessageParameter(sead::hostio::Context*, sead::SafeStringBase<char> const&);
    binarize(void*) const;
    createByTypeName(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&);
    postApplyResource_(void const*, unsigned long);
};

} } 
