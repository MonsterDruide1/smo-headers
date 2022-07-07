#pragma once

namespace al { 

class ModelDrawerPrepassCulling
{
public:
    ModelDrawerPrepassCulling(char const*);
    createTable();
    draw() const;
    registerModel(al::ModelCtrl*);
    addModel(al::ModelCtrl*);
    updateModel(al::ModelCtrl*);
    ~ModelDrawerPrepassCulling();
};

} 
