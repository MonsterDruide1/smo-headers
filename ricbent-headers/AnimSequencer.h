#pragma once

class AnimSequencer
{
public:
    AnimSequencer(IUseAnimSequencer*);
    start(char const**);
    next();
    passLoop();
    isEnd() const;
    update();
};
