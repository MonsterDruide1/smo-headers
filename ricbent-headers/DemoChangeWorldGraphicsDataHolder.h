#pragma once

class DemoChangeWorldGraphicsDataHolder
{
public:
    DemoChangeWorldGraphicsDataHolder(GameDataHolder const*);
    getGraphicsType(int, int) const;
    getGraphicsPreset(int*, int, int) const;
};
