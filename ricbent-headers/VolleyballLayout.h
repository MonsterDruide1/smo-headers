#pragma once

class VolleyballLayout
{
public:
    VolleyballLayout(VolleyballNpc const*, al::ActorInitInfo const&);
    exeWait();
    exeAppear();
    exeGame();
    exeResult();
    exeEnd();
    exeMessage();
    isWaiting() const;
    isInGame() const;
    start();
    result();
    end();
    setBest(unsigned int);
    setBestToday(unsigned int);
    ~VolleyballLayout();
};
