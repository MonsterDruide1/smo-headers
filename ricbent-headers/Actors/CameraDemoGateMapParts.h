#pragma once

class CameraDemoGateMapParts
{
public:
    CameraDemoGateMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    appearAndSetStart();
    exeWait();
    exeCamera();
    exeOpen();
    updatePose(float);
    exeBound();
    exeEnd();
};
