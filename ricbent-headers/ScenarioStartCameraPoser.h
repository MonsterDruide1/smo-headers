#pragma once

class ScenarioStartCameraPoser
{
public:
    ScenarioStartCameraPoser(char const*, bool);
    initScenarioCamera(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    getInterpoleType() const;
    getEndWaitStep() const;
};
