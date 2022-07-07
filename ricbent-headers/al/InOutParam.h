#pragma once

namespace al { 

class InOutParam
{
public:
    InOutParam();
    InOutParam(float, float, float, float);
    InOutParam(al::InOutParam const&);
    init(al::ByamlIter const&);
    calcLeapValue(float) const;
    calcEaseInValue(float) const;
    calcEaseOutValue(float) const;
    calcEaseInOutValue(float) const;
    calcSqrtValue(float) const;
    calcSquareValue(float) const;
};

} 
