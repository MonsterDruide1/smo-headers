#pragma once

class PlayerJudgeCameraSubjective
{
public:
    PlayerJudgeCameraSubjective(al::LiveActor const*, IUsePlayerCollision const*, PlayerInput const*);
    isEnableKeepSubjectiveCamera() const;
    judge() const;
    reset();
    update();
};
