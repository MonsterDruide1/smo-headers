#pragma once

namespace al { 

class YFogParam
{
public:
    YFogParam();
    setFollowCamera(bool);
    setBlendType(int);
    isFollowCamera() const;
    getDistanceSlope() const;
    getBlendType() const;
    getDistanceSlopeScale() const;
    getCausticsStart() const;
    getCausticsPower() const;
    getCausticsTexCrdScale() const;
    getCausticsTexCrdScaleY() const;
    getCausticsTexCrdYSpeed() const;
    getCausticsIntensity() const;
    trySetCameraYPos(sead::Camera const*);
    getParamName() const;
    getParamObj();
    getParamObj() const;
    getStart() const;
};

} 
