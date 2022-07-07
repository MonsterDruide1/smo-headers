#pragma once

class PlayerRecoder
{
public:
    PlayerRecoder(al::LiveActor const*, int);
    start();
    exeWait();
    exeRecode();
    exeEnd();
    update();
    getTrans(int) const;
    getPosture(int) const;
    getAnimName(int) const;
    endRecord();
    isEndRecode() const;
    ~PlayerRecoder();
};
