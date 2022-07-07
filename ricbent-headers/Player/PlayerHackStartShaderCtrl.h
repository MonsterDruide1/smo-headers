#pragma once

class PlayerHackStartShaderCtrl
{
public:
    PlayerHackStartShaderCtrl(al::LiveActor*, PlayerHackStartShaderParam*);
    setHost(al::LiveActor*);
    start();
    update();
    end();
};
