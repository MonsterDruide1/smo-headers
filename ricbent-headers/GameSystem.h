#pragma once

class GameSystem
{
public:
    GameSystem();
    ~GameSystem();
    init();
    setPadName();
    tryChangeSequence(char const*);
    movement();
    drawMain();
    exePlay();
};
