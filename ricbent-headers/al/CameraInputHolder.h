#pragma once

namespace al { 

class CameraInputHolder
{
public:
    CameraInputHolder(int);
    initAfterPlacement();
    getInput(int) const;
};

} 
