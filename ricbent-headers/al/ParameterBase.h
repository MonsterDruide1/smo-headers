#pragma once

namespace al { 

class ParameterBase
{
public:
    afterGetParam();
    ParameterBase(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterObj*, bool);
    initializeListNode(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterObj*, bool);
    ParameterBase(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterList*, bool);
    initializeListNode(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, al::ParameterList*, bool);
    initialize(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, bool);
    calcHash(sead::SafeStringBase<char> const&);
    tryGetParam(al::ByamlIter const&);
    isEqual_<char const*>(al::ParameterBase const&) const;
    copyLerp_<float>(al::ParameterBase const&, al::ParameterBase const&, float);
    copyLerp_<sead::Quat<float> >(al::ParameterBase const&, al::ParameterBase const&, float);
    isEqual(al::ParameterBase const&);
    copy(al::ParameterBase const&);
    copyLerp(al::ParameterBase const&, al::ParameterBase const&, float);
};

} 
