#pragma once

class PlayerCoverChecker
{
public:
    PlayerCoverChecker(al::LiveActor*);
    init();
    initByResource();
    checkCover() const;
};
