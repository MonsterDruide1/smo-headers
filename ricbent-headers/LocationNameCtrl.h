#pragma once

class LocationNameCtrl
{
public:
    LocationNameCtrl(al::AreaObjDirector*, GameDataHolder*, al::LayoutInitInfo const&, al::PlayerHolder const*);
    getAreaObjDirector() const;
    tryKill();
    exeHide();
    exeDelay();
    exeShow();
    ~LocationNameCtrl();
};
