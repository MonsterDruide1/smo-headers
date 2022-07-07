#pragma once

class PlayerJudgeSandSink
{
public:
    PlayerJudgeSandSink(IUsePlayerCollision const*, PlayerSandSinkAffect const*);
    judge() const;
    reset();
    update();
};
