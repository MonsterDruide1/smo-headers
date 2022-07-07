#pragma once

class SceneAudioSystemPauseController
{
public:
    SceneAudioSystemPauseController(al::AudioDirector*);
    update();
    tryResume();
    pause(bool);
    resume(int);
};
