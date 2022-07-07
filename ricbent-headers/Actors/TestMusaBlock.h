#pragma once

class TestMusaBlock
{
public:
    TestMusaBlock(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    placement(al::ActorInitInfo const&);
    placementInside(al::ActorInitInfo const&, sead::Vector3<float> const&, TestMusaBlock::ObjItem const*);
    initAfterPlacement();
    control();
    split();
};
