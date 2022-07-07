#pragma once

namespace agl { 

class ShaderProgram
{
public:
    ShaderProgram();
    ~ShaderProgram();
    cleanUp();
    destroyLocationBuffers();
    initializeVariation(sead::SafeStringBase<char> const&, int, sead::Heap*);
    createVariationMacro(int, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, int, sead::Heap*);
    setVariationMacroValue(int, int, sead::SafeStringBase<char> const&);
    createVariation(sead::Heap*);
    initialize_(sead::SafeStringBase<char> const&, agl::ResArray<agl::ResShaderVariation>, sead::Heap*);
    initialize(agl::ResShaderProgram, sead::Heap*);
    initialize(agl::ResBinaryShaderProgram, sead::Heap*);
    createAttribute(int, sead::Heap*);
    setAttributeName(int, sead::SafeStringBase<char> const&);
    destroyAttribute();
    createUniform(int, sead::Heap*);
    setUniformName(int, sead::SafeStringBase<char> const&);
    destroyUniform();
    createSamplerLocation(int, sead::Heap*);
    setSamplerLocationName(int, sead::SafeStringBase<char> const&);
    destroySamplerLocation();
    createImageLocation(int, sead::Heap*);
    setImageLocationName(int, sead::SafeStringBase<char> const&);
    destroyImageLocation();
    createUniformBlock(int, sead::Heap*);
    setUniformBlockName(int, sead::SafeStringBase<char> const&);
    destroyUniformBlock();
    createShaderStorageBlock(int, sead::Heap*);
    setShaderStorageBlockName(int, sead::SafeStringBase<char> const&);
    destroyShaderStorageBlock();
    setUpForVariation_() const;
    getShader(agl::ShaderType) const;
    setShaderGX2_(agl::DrawContext*) const;
    validate_() const;
    forceValidate_(bool) const;
    compileOffline_() const;
    updateLocation() const;
    updateUniformLocation() const;
    updateUniformBlockLocation() const;
    updateShaderStorageBlockLocation() const;
    updateAttributeLocation() const;
    updateSamplerLocation() const;
    updateImageLocation() const;
    activate(agl::DrawContext*, bool) const;
    setUpAllVariation(bool);
    reserveSetUpAllVariation();
    getShader(agl::ShaderType);
    dispatchCompute(agl::DrawContext*, int, int, int) const;
    dispatchComputeIndirect(agl::DrawContext*, agl::ShaderStorageBlock const&, int, long) const;
    calcHash(void const*, unsigned int);
    getUniformSymbol(agl::UniformSymbol*, int, bool) const;
    getUniformBlockSymbol(agl::UniformBlockSymbol*, int) const;
    getShaderStorageBlockSymbol(agl::ShaderStorageBlockSymbol*, int) const;
    getSamplerSymbol(agl::SamplerSymbol*, int) const;
    getAttributeSymbol(agl::AttributeSymbol*, int) const;
    getBufferVariableSymbol(agl::BufferVariableSymbol*, int) const;
    calcCompileSource(agl::ShaderType, sead::BufferedSafeStringBase<char>*, agl::ShaderCompileInfo::Target) const;
    calcCompileSourceNoVariation(agl::ShaderType, sead::BufferedSafeStringBase<char>*, agl::ShaderCompileInfo::Target) const;
    dump() const;
    hasStage(agl::ShaderType) const;
};

} 
