#pragma once

class MapDataHolder
{
public:
    MapDataHolder(GameDataHolder const*);
    loadMapData(al::Resource*, char const*, int);
    tryLoadMapData(al::Resource*, char const*, int);
    findViewMtx(int) const;
    findMapData(int) const;
};
