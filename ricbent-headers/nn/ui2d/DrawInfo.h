#pragma once

namespace nn { namespace ui2d { 

class DrawInfo
{
public:
    DrawInfo();
    ~DrawInfo();
    Map(int);
    Unmap();
    SetGpuAccessBufferIndex(int);
    SetProjectionMtx(nn::util::neon::MatrixColumnMajor4x4fType const&);
    SetupProgram(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RecordCurrentShader(nn::ui2d::ShaderInfo const*, unsigned char);
    ResetCurrentShader();
    LoadProjectionMtx(float (*) [4]);
    LoadMtxModelView(float (*) [4]);
    GetRuntimeTypeInfo() const;
};

} } 
