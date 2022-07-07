#pragma once

namespace agl { namespace utl { 

class INamedObj
{
public:
    INamedObj();
    ~INamedObj();
    getDefaultGroupName();
    getObjName() const;
    getGroupName() const;
    getObjType() const;
    isHostIOEnabled() const;
};

} } 
