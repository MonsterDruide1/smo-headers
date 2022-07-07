#pragma once

class OpeningStageStartDemo
{
public:
    OpeningStageStartDemo(char const*);
    init(al::ActorInitInfo const&);
    startDemo();
    startCamera(al::CameraTicket*, int);
    endDemo();
    isDemoLastStep() const;
    isEndDemo() const;
    isDrawLayout() const;
    exeWait();
    exeBeforeCameraAuto();
    exeCameraAuto();
    exeCameraTutorial();
    endCamera(int);
    exeWaitShowStandUpGuide();
    exeWaitStandUp();
    exeStandUp();
    isStageStartDemo() const;
};
