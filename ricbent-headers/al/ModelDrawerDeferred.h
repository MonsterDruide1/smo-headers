#pragma once

namespace al { 

class ModelDrawerDeferred
{
public:
    ModelDrawerDeferred(char const*, bool, bool, bool, bool);
    createTable();
    draw() const;
    addModel(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    ~ModelDrawerDeferred();
};

} 
