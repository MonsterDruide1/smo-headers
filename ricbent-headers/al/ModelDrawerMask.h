#pragma once

namespace al { 

class ModelDrawerMask
{
public:
    ModelDrawerMask(char const*);
    createTable();
    draw() const;
    updateModel(al::ModelCtrl*);
    ~ModelDrawerMask();
};

} 
