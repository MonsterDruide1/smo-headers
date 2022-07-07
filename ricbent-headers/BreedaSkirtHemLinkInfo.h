#pragma once

class BreedaSkirtHemLinkInfo
{
public:
    BreedaSkirtHemLinkInfo();
    init(al::LiveActor*, al::LiveActor*);
    initLength();
    update(float);
    update(float, float);
};
