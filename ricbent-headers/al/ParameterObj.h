#pragma once

namespace al { 

class ParameterObj
{
public:
    pushBackListNode(al::ParameterBase*);
    ParameterObj();
    tryGetParam(al::ByamlIter const&);
    addArray(al::ParameterArray*, sead::SafeStringBase<char> const&);
    isEqual(al::ParameterObj const&) const;
    copy(al::ParameterObj const&);
    copyLerp(al::ParameterObj const&, al::ParameterObj const&, float);
    findParameter(char const*) const;
};

} 
