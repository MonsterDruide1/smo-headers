#pragma once

class DemoChangeWorldScene
{
public:
    DemoChangeWorldScene(al::WipeHolder*);
    ~DemoChangeWorldScene();
    setGraphicsDataHolder(DemoChangeWorldGraphicsDataHolder const*);
    init(al::SceneInitInfo const&);
    initPlacement(al::GamePadSystem const*, al::ActorInitInfo const&);
    decideScenario(int, int, int, int);
    appear();
    kill();
    control();
    drawMain() const;
    exeFirstDemo();
    exeDemoBegin();
    isTypeOnlyDemoBegin() const;
    endDemoBegin();
    exeTalk();
    exeDemoEnd();
    requestScreenCoverNerveDemoEnd();
    exeSkipDemo();
    initPlacementSky(al::StageInfo const*, al::ActorInitInfo const&);
    initPlacementObject(al::StageInfo const*, al::ActorInitInfo const&, char const*);
};
