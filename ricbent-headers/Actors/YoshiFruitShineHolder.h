#pragma once

class YoshiFruitShineHolder
{
public:
    YoshiFruitShineHolder(char const*);
    init(al::ActorInitInfo const&);
    updateHintPos(sead::Vector3<float> const&);
    appearShineFromFruit(sead::Vector3<float> const&);
};
