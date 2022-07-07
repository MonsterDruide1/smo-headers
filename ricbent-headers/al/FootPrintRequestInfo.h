#pragma once

namespace al { 

class FootPrintRequestInfo
{
public:
    FootPrintRequestInfo();
    appear();
    disappear();
    update();
    isDisappear() const;
    isAppear() const;
    calcStrength() const;
};

} 
