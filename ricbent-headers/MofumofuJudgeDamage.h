#pragma once

class MofumofuJudgeDamage
{
public:
    MofumofuJudgeDamage(Mofumofu const*, int);
    clearAllBody();
    registerBody(MofumofuBody const*);
    judge(Mofumofu const*) const;
    judgeCore(int) const;
    judge(MofumofuBody const*) const;
};
