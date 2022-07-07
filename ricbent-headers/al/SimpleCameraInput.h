#pragma once

namespace al { 

class SimpleCameraInput
{
public:
    SimpleCameraInput(int);
    calcInputStick(sead::Vector2<float>*) const;
    isTriggerReset() const;
    isHoldZoom() const;
    isHoldSnapShotZoomIn() const;
    isHoldSnapShotZoomOut() const;
};

} 
