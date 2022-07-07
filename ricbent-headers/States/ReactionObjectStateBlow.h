#pragma once

class ReactionObjectStateBlow
{
public:
    ReactionObjectStateBlow(al::LiveActor*);
    appear();
    kill();
    control();
    start(al::HitSensor const*, al::HitSensor const*);
    readYaml(al::ByamlIter const&);
    ~ReactionObjectStateBlow();
};
