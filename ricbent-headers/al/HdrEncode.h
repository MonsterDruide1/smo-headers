#pragma once

namespace al { 

class HdrEncode
{
public:
    HdrEncode();
    ~HdrEncode();
    calcGpu();
    setUniformBlock(agl::ShaderProgram const*, agl::DrawContext*) const;
    setUniformBlock(agl::DrawContext*, agl::ShaderLocation const&) const;
};

} 
