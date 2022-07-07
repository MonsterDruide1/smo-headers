#pragma once

namespace al { 

class ModelDrawerBase
{
public:
    ModelDrawerBase(char const*);
    ~ModelDrawerBase();
    createTable();
    setDrawInfo(agl::DrawContext*, al::GraphicsSystemInfo const*, al::ModelDrawBufferCounter const*, al::ModelKeeper const*);
    registerModel(al::ModelCtrl*);
    addModel(al::ModelCtrl*);
    addModelToTable(al::ModelCtrl*);
    removeModel(al::ModelCtrl*);
    updateModel(al::ModelCtrl*);
    getDrawBufferIndex() const;
    createModelDrawDisplayList(int);
    isDraw() const;
};

} 
