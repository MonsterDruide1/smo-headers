#pragma once

namespace al { 

class ParameterArray
{
public:
    tryGetParam(al::ByamlIter const&);
    isEqual(al::ParameterArray const&) const;
    copy(al::ParameterArray const&);
    copyLerp(al::ParameterArray const&, al::ParameterArray const&, float);
    ParameterArray();
    addObj(al::ParameterObj*);
    clearObj();
    removeObj(al::ParameterObj*);
    isExistObj(al::ParameterObj*);
};

} 
