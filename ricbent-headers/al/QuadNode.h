#pragma once

namespace al { 

class QuadNode
{
public:
    QuadNode(sead::Vector2<float> const&, float);
    createUniformBlock();
    setNodeUbo(float, float, sead::Vector2<float> const&, sead::Matrix34<float> const&);
    copy(al::QuadNode const&);
    calcBoundingSphere(sead::Vector3<float>*, float*) const;
    calcBoundingBox(sead::BoundBox3<float>*, float, float) const;
    isLeaf() const;
};

} 
