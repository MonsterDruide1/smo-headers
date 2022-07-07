#pragma once

class TemporaryScenarioCameraHolder
{
public:
    TemporaryScenarioCameraHolder(ScenarioCameraRelationInfo*, int);
    registInfo(int, al::CameraTicket*);
    tryFindEntranceCameraByShineId(int) const;
};
