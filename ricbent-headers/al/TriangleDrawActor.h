#pragma once

namespace al { 

class TriangleDrawActor
{
public:
    TriangleDrawActor(al::ActorInitInfo const&, int, bool);
    draw() const;
    setTexture(al::TriangleDrawActorTexture*);
    begin();
    vertex(sead::Vector3<float> const&);
    vertex(sead::Vector3<float> const&, sead::Vector2<float> const&);
    vertex(sead::Vector3<float> const&, sead::Vector3<float> const&);
    vertex(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector2<float> const&);
    end();
    beginModify();
    modifyTriangle(unsigned int);
    modifyVertex(sead::Vector3<float> const&);
    modifyVertex(sead::Vector3<float> const&, sead::Vector2<float> const&);
    modifyVertex(sead::Vector3<float> const&, sead::Vector3<float> const&);
    modifyVertex(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector2<float> const&);
    endModify();
    init(al::ActorInitInfo const&);
    initVertexBuffers();
    initShader();
    initFetchShader();
    initSampler();
    initMaterial();
    initIndexStream();
};

} 
