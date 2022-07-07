#pragma once

namespace agl { namespace ShaderProgram { 

class VariationBuffer
{
public:
    initialize(int, sead::Heap*);
    createMacro(int, sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, int, sead::Heap*);
    setMacroValue(int, int, sead::SafeStringBase<char> const&);
    create(sead::Heap*);
    getMacroAndValueArray(int, char const**, char const**) const;
    VariationBuffer();
    ~VariationBuffer();
    searchShaderProgramIndex(int, char const* const*, char const* const*, int) const;
    searchMacroValue(int, char const*) const;
    searchMacroName(sead::SafeStringBase<char> const&) const;
    searchMacroID(sead::SafeStringBase<char> const&) const;
    searchMacroIndex(sead::SafeStringBase<char> const&) const;
};

} } 
