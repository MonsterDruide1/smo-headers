#pragma once

namespace sead { 

class Viewport
{
public:
    Viewport();
    Viewport(float, float, float, float);
    Viewport(sead::BoundBox2<float> const&);
    Viewport(sead::LogicalFrameBuffer const&);
    setByFrameBuffer(sead::LogicalFrameBuffer const&);
    apply(sead::DrawContext*, sead::LogicalFrameBuffer const&) const;
    getOnFrameBufferPos(sead::Vector2<float>*, sead::LogicalFrameBuffer const&) const;
    getOnFrameBufferSize(sead::Vector2<float>*, sead::LogicalFrameBuffer const&) const;
    applyViewport(sead::DrawContext*, sead::LogicalFrameBuffer const&) const;
    applyScissor(sead::DrawContext*, sead::LogicalFrameBuffer const&) const;
    project(sead::Vector2<float>*, sead::Vector3<float> const&) const;
    project(sead::Vector2<float>*, sead::Vector2<float> const&) const;
    unproject(sead::Vector3<float>*, sead::Vector2<float> const&, sead::Projection const&, sead::Camera const&) const;
    unprojectRay(sead::Ray<sead::Vector3<float> >*, sead::Vector2<float> const&, sead::Projection const&, sead::Camera const&) const;
    ~Viewport();
};

} 
