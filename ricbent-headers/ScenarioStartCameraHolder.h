#pragma once

class ScenarioStartCameraHolder
{
public:
    ScenarioStartCameraHolder();
    init(al::Scene const*, al::ActorInitInfo const&);
    isExistEnableNextScenarioStartCamera() const;
    tryStartNextScenarioStartCamera();
    startNextScenarioStartCamera();
    getCurrentScenarioStartCameraMaxPlayStep() const;
};
