#pragma once

namespace agl { 

class ShaderProgramArchive
{
public:
    ShaderProgramArchive();
    ~ShaderProgramArchive();
    destroy();
    createWithOption(agl::ResBinaryShaderArchive, agl::ResShaderArchive, unsigned int, sead::Heap*);
    setResShaderArchive_(agl::ResShaderArchive, sead::Heap*);
    destroyResFile_();
    updateCompileInfo();
    setUp();
    setUp_(bool);
    setUpFromObjectReflector(bool, bool);
    searchShaderProgramIndex(sead::SafeStringBase<char> const&) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} 
