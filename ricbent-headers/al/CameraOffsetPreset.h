#pragma once

namespace al { 

class CameraOffsetPreset
{
public:
    CameraOffsetPreset();
    CameraOffsetPreset(al::CameraOffsetPresetData const*, int);
    loadParam(al::ByamlIter const&);
};

} 
