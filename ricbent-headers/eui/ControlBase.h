#pragma once

namespace eui { 

class ControlBase
{
public:
    getClassName() const;
    ControlBase();
    ~ControlBase();
    Update(float);
    GetRuntimeTypeInfo() const;
};

} 
