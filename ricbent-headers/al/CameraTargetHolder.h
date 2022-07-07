#pragma once

namespace al { 

class CameraTargetHolder
{
public:
    CameraTargetHolder(int);
    initAfterPlacement(al::PlayerHolder const*);
    tryGetViewTarget(int) const;
    update();
    addTarget(al::CameraTargetBase*);
    removeTarget(al::CameraTargetBase*);
    getViewTarget(int) const;
    isChangeViewTarget(int) const;
    getTopSubTarget() const;
    addSubTarget(al::CameraSubTargetBase*);
    removeSubTarget(al::CameraSubTargetBase*);
    addPlacementSubTarget(al::CameraSubTargetBase*);
    removePlacementSubTarget(al::CameraSubTargetBase*);
};

} 
