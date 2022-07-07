#pragma once

namespace al { 

class ModelDrawerDepthShadow
{
public:
    ModelDrawerDepthShadow(char const*, bool, bool);
    createTable();
    registerModel(al::ModelCtrl*);
    addModel(al::ModelCtrl*);
    updateModel(al::ModelCtrl*);
    draw() const;
    ~ModelDrawerDepthShadow();
};

} 
