#pragma once

class MapSeaOfTreeIcon
{
public:
    MapSeaOfTreeIcon(al::LayoutInitInfo const&);
    appearHint0Mode();
    appearHint1Mode();
    appearHint2Mode();
    end();
    trySetIconType(MapSeaOfTreeIcon::SeaOfTreeIconType);
    resetIconType();
    getHint1LayoutPos(sead::Vector3<float>*) const;
    getHint2LayoutPos(sead::Vector3<float>*) const;
    getPlayerLayoutPos(sead::Vector3<float>*) const;
    exeAppear();
    exeWait();
    exeEnd();
    exeDead();
};
