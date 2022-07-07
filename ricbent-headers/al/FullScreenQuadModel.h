#pragma once

namespace al { 

class FullScreenQuadModel
{
public:
    FullScreenQuadModel();
    ~FullScreenQuadModel();
    drawQuad(agl::DrawContext*) const;
};

} 
