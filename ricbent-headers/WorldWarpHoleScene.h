#pragma once

class WorldWarpHoleScene
{
public:
    WorldWarpHoleScene(al::WipeHolder*);
    ~WorldWarpHoleScene();
    init(al::SceneInitInfo const&);
    initPlacement(al::ActorInitInfo const&);
    appear();
    control();
    drawMain() const;
    tryEnd();
    isEnableEndLoop() const;
    exeStart();
    exeLoop();
    exeEnd();
    exeSkipProc();
    initPlacementSky(al::StageInfo const*, al::ActorInitInfo const&);
    initPlacementObject(al::StageInfo const*, al::ActorInitInfo const&, char const*);
    initPlacementDemo(al::StageInfo const*, al::ActorInitInfo const&);
};
