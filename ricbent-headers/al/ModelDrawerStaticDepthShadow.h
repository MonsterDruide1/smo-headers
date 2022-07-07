#pragma once

namespace al { 

class ModelDrawerStaticDepthShadow
{
public:
    ModelDrawerStaticDepthShadow(char const*);
    createTable();
    addModel(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    draw() const;
    ~ModelDrawerStaticDepthShadow();
};

} 
