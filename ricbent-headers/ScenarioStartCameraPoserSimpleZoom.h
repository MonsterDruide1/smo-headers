#pragma once

class ScenarioStartCameraPoserSimpleZoom
{
public:
    ScenarioStartCameraPoserSimpleZoom(char const*, bool);
    initScenarioCamera(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    update();
};
