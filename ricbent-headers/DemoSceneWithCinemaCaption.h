#pragma once

class DemoSceneWithCinemaCaption
{
public:
    DemoSceneWithCinemaCaption(al::WipeHolder*);
    init(al::SceneInitInfo const&);
    exePlay();
    initLayout(al::LayoutInitInfo const&);
    ~DemoSceneWithCinemaCaption();
};
