#pragma once

namespace al { 

class LiveActorKit
{
public:
    LiveActorKit(int, int);
    ~LiveActorKit();
    init(int);
    initGraphics(al::GraphicsInitArg const&);
    initHitSensorDirector();
    initGravityHolder();
    initShadowDirector();
    initEffectSystem();
    initSwitchAreaDirector(int, int);
    initNatureDirector();
    endInit();
    update(char const*);
    clearGraphicsRequest();
    updateGraphics();
    preDrawGraphics();
};

} 
