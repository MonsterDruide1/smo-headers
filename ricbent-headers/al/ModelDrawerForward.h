#pragma once

namespace al { 

class ModelDrawerForward
{
public:
    ModelDrawerForward(char const*, bool, bool, bool, bool, bool, bool);
    createTable();
    draw() const;
    addModel(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    ~ModelDrawerForward();
};

} 
