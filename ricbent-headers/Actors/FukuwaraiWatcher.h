#pragma once

class FukuwaraiWatcher
{
public:
    FukuwaraiWatcher(char const*);
    init(al::ActorInitInfo const&);
    control();
    getPartsNum() const;
    getParts(int) const;
    exeWait();
    exeSetStartPosition();
    exeMemorize();
    exePlay();
    exeWaitStartResultEnd();
    calcTotalScore() const;
    exeResultWait();
    exeResultAppearParts();
    exeEnd();
};
