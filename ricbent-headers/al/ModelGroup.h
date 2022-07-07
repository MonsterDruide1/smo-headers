#pragma once

namespace al { 

class ModelGroup
{
public:
    ModelGroup(int);
    ~ModelGroup();
    registerModel(al::ModelKeeper*);
};

} 
