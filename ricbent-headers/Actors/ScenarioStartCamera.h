#pragma once

class ScenarioStartCamera
{
public:
    ScenarioStartCamera(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    kill();
    getBaseMtx() const;
    isEnableStart() const;
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    end();
    exePlay();
    getPoser(int) const;
    exePlayAnim();
    exeEnd();
    getMaxPlayStep();
};
