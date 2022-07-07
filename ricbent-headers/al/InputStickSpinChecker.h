#pragma once

namespace al { 

class InputStickSpinChecker
{
public:
    InputStickSpinChecker();
    update(sead::Vector2<float> const&);
    reset();
    isSpin(float) const;
    isLeftSpin(float) const;
    isRightSpin(float) const;
};

} 
