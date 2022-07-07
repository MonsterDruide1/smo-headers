#pragma once

namespace al { 

class ModelAnimInterp
{
public:
    ModelAnimInterp(nn::g3d::SkeletonObj*);
    update();
    prepareAnimInterp(nn::g3d::SkeletonObj*, char const*, char const*, sead::Buffer<nn::g3d::SkeletalAnimObj*> const&);
    prepareAnimInterp(nn::g3d::SkeletonObj*, int, sead::Buffer<nn::g3d::SkeletalAnimObj*> const&);
    prepareNoInterp();
    initWithArcPath(char const*, int);
    interpAnim(nn::g3d::SkeletonObj*) const;
};

} 
