#pragma once

namespace al { 

class ModelLodAllCtrl
{
public:
    ModelLodAllCtrl(al::GraphicsQualityInfo const*);
    registerLodCtrl(al::ModelLodCtrl*);
    endInit();
    updateLodAll();
    update();
};

} 
