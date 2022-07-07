#pragma once

class PlayerActorBase
{
public:
    init(al::ActorInitInfo const&);
    initPlayer(al::ActorInitInfo const&, PlayerInitInfo const&);
    getPlayerCollision() const;
    getPlayerHackKeeper() const;
    isEnableDemo();
    startDemo();
    endDemo();
    startDemoPuppetable();
    endDemoPuppetable();
    startDemoShineGet();
    endDemoShineGet();
    startDemoMainShineGet();
    endDemoMainShineGet();
    startDemoHack();
    endDemoHack();
    startDemoKeepBind();
    noticeDemoKeepBindExecute();
    endDemoKeepBind();
    startDemoKeepCarry();
    endDemoKeepCarry();
    getDemoActor();
    getDemoAnimator();
    isDamageStopDemo() const;
    getPlayerPuppet();
    getPlayerInfo() const;
    PlayerActorBase(char const*);
    getPortNo() const;
    getViewMtx() const;
    movement();
    checkDeathArea();
    sendCollisionMsg();
    receivePushMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, float);
};
