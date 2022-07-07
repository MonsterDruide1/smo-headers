#pragma once

namespace al { 

class CameraOffsetCtrlPreset
{
public:
    CameraOffsetCtrlPreset();
    load(al::ByamlIter const&);
    getOffset() const;
};

} 
