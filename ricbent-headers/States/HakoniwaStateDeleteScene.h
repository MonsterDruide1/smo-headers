#pragma once

class HakoniwaStateDeleteScene
{
public:
    HakoniwaStateDeleteScene(al::Sequence*, WorldResourceLoader*);
    deleteScene();
    ~HakoniwaStateDeleteScene();
    appear();
    kill();
    start(al::Scene*, bool, bool, int);
    exePrepare();
    exeFinalizeAudio();
    exeDeleteScene();
};
