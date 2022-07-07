#pragma once

class CapManHeroDemoDirector
{
public:
    CapManHeroDemoDirector();
    init(al::ActorInitInfo const&);
    isEndDemo() const;
    isExistTalkDemoStageStart() const;
    isExistTalkDemoMoonRockFind() const;
    isExistTalkDemoAfterMoonRockBreakDemo() const;
    preEventFromSceneFirstMoonGet(char const*);
    startTalkDemoFirstMoonGet();
    startTalkDemoCore(StageTalkDemoNpcCap*);
    startTalkDemoStageStart();
    startTalkDemoMoonRockFind();
    startTalkDemoAfterMoonRockBreakDemo();
    getSceneObjName() const;
    ~CapManHeroDemoDirector();
};
