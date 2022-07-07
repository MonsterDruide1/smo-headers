#pragma once

namespace al { 

class FullScreenTriangle
{
public:
    FullScreenTriangle();
    ~FullScreenTriangle();
    drawFar(agl::DrawContext*) const;
    drawTriReverse(agl::DrawContext*) const;
    drawTri(agl::DrawContext*) const;
    drawNear(agl::DrawContext*) const;
};

} 
