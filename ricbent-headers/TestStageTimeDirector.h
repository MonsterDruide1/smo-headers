#pragma once

class TestStageTimeDirector
{
public:
    TestStageTimeDirector();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    setTime(int, int, unsigned int);
    control();
    getSceneObjName() const;
    ~TestStageTimeDirector();
};
