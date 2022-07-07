#pragma once

namespace agl { namespace lyr { 

class RenderDLBuffer
{
public:
    RenderDLBuffer();
    ~RenderDLBuffer();
    initialize(unsigned long, unsigned long, int, int, sead::Heap*, sead::Heap*);
    clear(bool);
    invalidateCurrentBuffer() const;
    begin(agl::DrawContext*, sead::SafeStringBase<char> const&, int);
    end(agl::DrawContext*, int);
};

} } 
