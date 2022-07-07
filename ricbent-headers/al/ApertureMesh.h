#pragma once

namespace al { 

class ApertureMesh
{
public:
    ApertureMesh(char const*, al::ViewVastGridCullingArray const*, int, al::IUseGridMesh*);
    ~ApertureMesh();
    update();
    draw(agl::DrawContext*, agl::ShaderProgram const&, int) const;
    drawLayer(agl::DrawContext*, int, agl::ShaderProgram const&, int) const;
    drawLayerUnder(agl::DrawContext*, int, agl::ShaderProgram const&, int) const;
    drawLayerOver(agl::DrawContext*, int, agl::ShaderProgram const&, int) const;
};

} 
