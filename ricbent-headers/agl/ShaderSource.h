#pragma once

namespace agl { 

class ShaderSource
{
public:
    initialize(agl::ShaderProgramArchive*, int, agl::ResShaderSource, bool, sead::Heap*);
    expand();
    resize(sead::SafeStringBase<char> const&, int);
    ShaderSource();
    ~ShaderSource();
    genMessage(sead::hostio::Context*);
    genCompileButton(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} 
