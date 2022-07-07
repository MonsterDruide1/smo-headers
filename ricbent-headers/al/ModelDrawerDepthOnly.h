#pragma once

namespace al { 

class ModelDrawerDepthOnly
{
public:
    ModelDrawerDepthOnly(char const*, bool, bool, bool, bool, bool);
    ~ModelDrawerDepthOnly();
    createTable();
    createTableCulling();
    draw() const;
    registerModel(al::ModelCtrl*);
    addModel(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    updateModel(al::ModelCtrl*);
};

} 
