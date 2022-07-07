#pragma once

namespace al { 

class AnimPlayerVis
{
public:
    tryCreate(al::AnimPlayerInitInfo const*);
    AnimPlayerVis();
    init(al::AnimPlayerInitInfo const*);
    setAnimToModel(al::AnimResInfo const*);
};

} 
