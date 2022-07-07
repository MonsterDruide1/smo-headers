#pragma once

class EndingScene
{
public:
    EndingScene(al::WipeHolder*);
    ~EndingScene();
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
