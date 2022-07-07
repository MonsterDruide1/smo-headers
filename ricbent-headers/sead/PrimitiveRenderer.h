#pragma once

namespace sead { 

class PrimitiveRenderer
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrimitiveRenderer();
    ~PrimitiveRenderer();
    prepareFromBinary(sead::Heap*, void const*, unsigned int);
    prepare(sead::Heap*, sead::SafeStringBase<char> const&);
    setCamera(sead::Camera const&);
    setProjection(sead::Projection const&);
    setModelMatrix(sead::Matrix34<float> const&);
    begin();
    end();
    drawQuad(sead::Color4f const&, sead::Color4f const&);
    drawQuad(sead::Texture const&, sead::Color4f const&, sead::Color4f const&, sead::Vector2<float> const&, sead::Vector2<float> const&);
    drawBox(sead::Color4f const&, sead::Color4f const&);
    drawCube(sead::Color4f const&, sead::Color4f const&);
    drawWireCube(sead::Color4f const&, sead::Color4f const&);
    drawLine(sead::Color4f const&, sead::Color4f const&);
    drawSphere4x8(sead::Color4f const&, sead::Color4f const&);
    drawSphere8x16(sead::Color4f const&, sead::Color4f const&);
    drawDisk16(sead::Color4f const&, sead::Color4f const&);
    drawDisk32(sead::Color4f const&, sead::Color4f const&);
    drawCircle16(sead::Color4f const&);
    drawCircle32(sead::Color4f const&);
    drawCylinder16(sead::Color4f const&, sead::Color4f const&);
    drawCylinder32(sead::Color4f const&, sead::Color4f const&);
    drawQuad(sead::PrimitiveDrawer::QuadArg const&);
    drawQuad(sead::Texture const&, sead::PrimitiveDrawer::QuadArg const&, sead::PrimitiveDrawer::UVArg const&);
    drawBox(sead::PrimitiveDrawer::QuadArg const&);
    drawCube(sead::PrimitiveDrawer::CubeArg const&);
    drawWireCube(sead::PrimitiveDrawer::CubeArg const&);
    drawLine(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&, sead::Color4f const&);
    drawLine(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&);
    drawSphere4x8(sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&);
    drawSphere4x8(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawSphere8x16(sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&);
    drawSphere8x16(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawDisk16(sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&);
    drawDisk16(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawDisk32(sead::Vector3<float> const&, float, sead::Color4f const&, sead::Color4f const&);
    drawDisk32(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawCircle16(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawCircle32(sead::Vector3<float> const&, float, sead::Color4f const&);
    drawCylinder16(sead::Vector3<float> const&, float, float, sead::Color4f const&, sead::Color4f const&);
    drawCylinder16(sead::Vector3<float> const&, float, float, sead::Color4f const&);
    drawCylinder32(sead::Vector3<float> const&, float, float, sead::Color4f const&, sead::Color4f const&);
    drawCylinder32(sead::Vector3<float> const&, float, float, sead::Color4f const&);
    drawAxis(sead::Vector3<float> const&, float);
    sInstance;
};

} 
