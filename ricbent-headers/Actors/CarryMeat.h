#pragma once

class CarryMeat
{
public:
    CarryMeat(char const*);
    init(al::ActorInitInfo const&);
    validateHack();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endHack();
    reset();
    control();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    endDemoAndBind(sead::Matrix34<float> const*);
    isWaiting() const;
    isBindable() const;
    isCarryReaction() const;
    startDemo();
    drop();
    addDemoActor();
    exeWaitSalt();
    exeWait();
    exeHackStart();
    exeHackSalt();
    exeHackSaltJump();
    exeHack();
    exeReactionJump();
    exeReactionHipDrop();
    exeHackMoveWait();
    exeHackMove();
    exeHackJump();
    exeHackJumpEnd();
    exeHackBindable();
    exeDemoCarryMeat();
    exeHackBind();
    exeHackBindReaction();
    exeHackFall();
    exeSurf();
};
