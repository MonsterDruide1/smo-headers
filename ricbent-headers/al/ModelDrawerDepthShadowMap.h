#pragma once

namespace al { 

class ModelDrawerDepthShadowMap
{
public:
    ModelDrawerDepthShadowMap(char const*);
    createTable();
    removeModel(al::ModelCtrl*);
    draw() const;
    updateModel(al::ModelCtrl*);
    ~ModelDrawerDepthShadowMap();
};

} 
