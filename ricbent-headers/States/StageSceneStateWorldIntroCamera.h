#pragma once

class StageSceneStateWorldIntroCamera
{
public:
    StageSceneStateWorldIntroCamera(char const*, al::ActorInitInfo const&, al::Scene*, al::SimpleLayoutAppearWaitEnd*, al::SimpleLayoutAppearWaitEnd*, al::SimpleAudioUser*, StageSceneStateSkipDemo*);
    appear();
    kill();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    endDemo();
    exePlay();
    exeSkip();
    ~StageSceneStateWorldIntroCamera();
};
