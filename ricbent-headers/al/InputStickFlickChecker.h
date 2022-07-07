#pragma once

namespace al { 

class InputStickFlickChecker
{
public:
    InputStickFlickChecker();
    update(sead::Vector2<float> const&);
};

} 
