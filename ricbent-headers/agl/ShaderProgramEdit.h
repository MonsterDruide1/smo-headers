#pragma once

namespace agl { 

class ShaderProgramEdit
{
public:
    initialize(agl::ShaderProgramArchive*, int, agl::ResShaderProgram, sead::Heap*);
    updateRawText();
    updateAnalyze();
    ShaderProgramEdit();
    ~ShaderProgramEdit();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} 
