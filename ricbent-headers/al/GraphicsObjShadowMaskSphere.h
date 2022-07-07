#pragma once

namespace al { 

class GraphicsObjShadowMaskSphere
{
public:
    GraphicsObjShadowMaskSphere(char const*);
    init(al::ActorInitInfo const&);
    declare(al::ShadowMaskDrawCategory);
    update();
    ~GraphicsObjShadowMaskSphere();
    updateMulti();
    addMulti();
    getShadowMaskType() const;
    control();
};

} 
