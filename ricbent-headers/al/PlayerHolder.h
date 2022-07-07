#pragma once

namespace al { 

class PlayerHolder
{
public:
    PlayerHolder(int);
    clear();
    registerPlayer(al::LiveActor*, al::PadRumbleKeeper*);
    getPlayer(int) const;
    tryGetPlayer(int) const;
    getPlayerNum() const;
    getBufferSize() const;
    isFull() const;
    isExistPadRumbleKeeper(int) const;
    getPadRumbleKeeper(int) const;
};

} 
