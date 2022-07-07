#pragma once

class StageEventDemo
{
public:
    StageEventDemo(char const*);
    init(al::ActorInitInfo const&);
    startDemo();
    endDemo();
    isDemoLastStep() const;
    isEndDemo() const;
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    endDemoCore();
    updateOnlyDemoGraphics();
    exeWait();
    exeDemo();
    exeEnd();
    isStageStartDemo() const;
};
