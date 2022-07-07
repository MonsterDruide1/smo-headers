#pragma once

namespace al { 

class ParameterList
{
public:
    addParam(al::ParameterBase*);
    ParameterList();
    addList(al::ParameterList*, sead::SafeStringBase<char> const&);
    addObj(al::ParameterObj*, sead::SafeStringBase<char> const&);
    addArray(al::ParameterArray*, sead::SafeStringBase<char> const&);
    clearList();
    clearObj();
    removeList(al::ParameterList*);
    removeObj(al::ParameterObj*);
    isExistObj(al::ParameterObj*);
    tryGetParam(al::ByamlIter const&);
};

} 
