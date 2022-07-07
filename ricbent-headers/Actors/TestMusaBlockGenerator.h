#pragma once

class TestMusaBlockGenerator
{
public:
    TestMusaBlockGenerator(char const*);
    init(al::ActorInitInfo const&);
    split(TestMusaBlock*, int);
    onAppear();
    offAppear();
    initAfterPlacement();
    control();
    exeHide();
    exeWait();
    getEmptyBlock();
};
