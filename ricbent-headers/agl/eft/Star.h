#pragma once

namespace agl { namespace eft { 

class Star
{
public:
    setUpShader(agl::ShaderProgramArchive*, sead::Heap*);
    Star();
    setDefault();
    ~Star();
    finalize();
    initialize(agl::eft::Star::InitializeArg const&);
    updateAttenuationParam(float, float);
    allocateUnit(sead::Heap*, unsigned int);
    updateUnit(float, float);
    removeUnit();
    updateUBO(unsigned int, sead::Matrix44<float> const&, sead::Matrix34<float> const&);
    draw(agl::DrawContext*, unsigned int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
