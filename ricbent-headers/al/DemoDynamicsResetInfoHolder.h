#pragma once

namespace al { 

class DemoDynamicsResetInfoHolder
{
public:
    DemoDynamicsResetInfoHolder(char const*, char const*);
    isResetDynamics(char const*, int) const;
};

} 
