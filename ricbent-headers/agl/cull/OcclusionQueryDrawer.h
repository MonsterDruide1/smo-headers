#pragma once

namespace agl { namespace cull { 

class OcclusionQueryDrawer
{
public:
    OcclusionQueryDrawer();
    ~OcclusionQueryDrawer();
    initialize(int, int, sead::Heap*);
    clear();
    calc();
    calcView(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    draw(agl::DrawContext*, int) const;
    draw_(agl::DrawContext*, int, bool) const;
    drawDebug(agl::DrawContext*, int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
