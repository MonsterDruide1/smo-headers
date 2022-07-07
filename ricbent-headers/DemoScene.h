#pragma once

class DemoScene
{
public:
    DemoScene(al::WipeHolder*);
    ~DemoScene();
    init(al::SceneInitInfo const&);
    initPlacement(al::ActorInitInfo const&);
    appear();
    control();
    kill();
    drawMain() const;
    exePlay();
    isLoadEnd() const;
    exeSkipProc();
    initLayout(al::LayoutInitInfo const&);
    initPlacementSky(al::StageInfo const*, al::ActorInitInfo const&);
    initPlacementDemo(al::StageInfo const*, al::ActorInitInfo const&);
    initPlacementObject(al::StageInfo const*, al::ActorInitInfo const&, char const*);
};
