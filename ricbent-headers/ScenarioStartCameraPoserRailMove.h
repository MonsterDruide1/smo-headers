#pragma once

class ScenarioStartCameraPoserRailMove
{
public:
    ScenarioStartCameraPoserRailMove(char const*, bool);
    initScenarioCamera(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    update();
};
