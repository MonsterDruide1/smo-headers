#pragma once

class JumpingRopeLayout
{
public:
    JumpingRopeLayout(JumpingRopeNpc*, al::ActorInitInfo const&);
    exeWait();
    exeGame();
    exeResult();
    exeEnd();
    exeDisplayTutorial();
    isWaiting() const;
    setBest(unsigned int);
    ~JumpingRopeLayout();
};
