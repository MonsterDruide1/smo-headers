#pragma once

namespace al { 

class ShadowKeeper
{
public:
    ShadowKeeper();
    initAfterPlacement(al::GraphicsSystemInfo*);
    update();
    isHide() const;
    hide();
    show();
};

} 
