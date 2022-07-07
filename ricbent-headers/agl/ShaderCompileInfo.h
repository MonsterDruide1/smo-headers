#pragma once

namespace agl { 

class ShaderCompileInfo
{
public:
    ShaderCompileInfo();
    ~ShaderCompileInfo();
    destroy();
    create(int, int, sead::Heap*);
    clearVariation();
    pushBackVariation(char const*, char const*);
    calcCompileSource(agl::ShaderType, sead::BufferedSafeStringBase<char>*, agl::ShaderCompileInfo::Target, bool) const;
    getRegitserUniformBlockName();
};

} 
