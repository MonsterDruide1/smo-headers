#pragma once

class DemoChangeEffectObj
{
public:
    DemoChangeEffectObj(char const*);
    init(al::ActorInitInfo const&);
    onDemoEnvironmentChange();
    offDemoEnvirnomentChange();
};
