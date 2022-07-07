#pragma once

class BossKnuckleHandPrint
{
public:
    BossKnuckleHandPrint(char const*);
    initWithArchiveName(al::ActorInitInfo const&, char const*);
    appear();
    startDisappearIfAppeard();
    exeAppear();
    exeDisappear();
};
