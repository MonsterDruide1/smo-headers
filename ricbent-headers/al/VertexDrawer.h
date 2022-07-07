#pragma once

namespace al { 

class VertexDrawer
{
public:
    VertexDrawer(unsigned long, int);
    ~VertexDrawer();
    clear();
    beginStore();
    storeVtxAttr(int, sead::Vector4<float> const&);
    nextVtx();
    endStore();
    drawPoints(agl::DrawContext*) const;
    drawLines(agl::DrawContext*) const;
    drawQuads(agl::DrawContext*) const;
};

} 
