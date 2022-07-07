#pragma once

namespace al { 

class KeyRepeatCtrl
{
public:
    KeyRepeatCtrl();
    init(int, int);
    update(bool, bool);
    reset();
    isUp() const;
    isDown() const;
};

} 
