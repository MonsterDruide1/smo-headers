#pragma once

class BossKnuckleMummyGenerator
{
public:
    BossKnuckleMummyGenerator(al::LiveActor const*, al::ActorInitInfo const&);
    tryGenerate(sead::Vector3<float> const&, int);
};
