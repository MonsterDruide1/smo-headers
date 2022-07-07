#pragma once

namespace al { 

class ModelDrawerChromakey
{
public:
    ModelDrawerChromakey(char const*, bool, bool, bool, bool);
    createTable();
    registerModel(al::ModelCtrl*);
    draw() const;
    ~ModelDrawerChromakey();
};

} 
