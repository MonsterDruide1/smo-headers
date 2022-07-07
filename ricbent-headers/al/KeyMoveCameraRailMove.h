#pragma once

namespace al { 

class KeyMoveCameraRailMove
{
public:
    KeyMoveCameraRailMove(char const*);
    initByPlacementObj(al::PlacementInfo const&);
    initPointInfoTable(int);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    calcPoseInfoDirect(float*, float*, float*) const;
    updatePose();
    update();
};

} 
