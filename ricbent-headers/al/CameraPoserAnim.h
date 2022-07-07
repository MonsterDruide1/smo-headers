#pragma once

namespace al { 

class CameraPoserAnim
{
public:
    CameraPoserAnim();
    initAnimResource(al::Resource const*, sead::Matrix34<float> const*);
    setAnim(char const*, int, int, int);
    isExistAnim(char const*) const;
    start(al::CameraStartInfo const&);
    update();
    calcStepMax(char const*) const;
    isAnimPlaying(char const*) const;
    isAnimEnd() const;
};

} 
