#pragma once

namespace al { 

class ModelDrawerWorldAo
{
public:
    ModelDrawerWorldAo(char const*);
    createTable();
    draw() const;
    addModel(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    ~ModelDrawerWorldAo();
};

} 
