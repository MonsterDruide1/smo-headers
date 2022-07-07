#pragma once

namespace al { 

class RollParts
{
public:
    RollParts(al::LayoutActor*, al::LayoutInitInfo const&, char const*);
    startLoopAction(char const*, char const*);
    setData(char16_t const**, int, bool, int, char const*);
    updateHeaderText();
    setSelectedIdx(int);
    activate();
    activate(int);
    deactivate();
    rollRight();
    rollLeft();
    calcCursorTrans(sead::Vector2<float>*) const;
    isJustChangeRoll() const;
    isRoll() const;
    exeDeactive();
    exeActive();
    exeRollOut();
    exeRollIn();
};

} 
