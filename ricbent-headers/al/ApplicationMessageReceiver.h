#pragma once

namespace al { 

class ApplicationMessageReceiver
{
public:
    ApplicationMessageReceiver();
    init();
    getOperationMode() const;
    getPerformaceMode() const;
    update();
    procMessage(unsigned int);
};

} 
