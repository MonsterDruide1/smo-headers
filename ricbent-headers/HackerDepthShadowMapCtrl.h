#pragma once

class HackerDepthShadowMapCtrl
{
public:
    HackerDepthShadowMapCtrl(al::LiveActor*, char const*, float, float, float);
    resetAndUpdate();
    update(PlayerCollider*);
};
