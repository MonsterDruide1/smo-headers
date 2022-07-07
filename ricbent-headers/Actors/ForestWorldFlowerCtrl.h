#pragma once

class ForestWorldFlowerCtrl
{
public:
    ForestWorldFlowerCtrl(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeWaitAfter();
    exeFadeOut();
    exeFadeWait();
    exeFadeIn();
    exeWaitBloom();
    exeBloom();
};
