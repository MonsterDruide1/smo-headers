#pragma once

namespace al { 

class GraphicsPreset
{
public:
    GraphicsPreset(char const*, al::Resource const*);
    endInit(al::MaterialCategoryKeeper*, al::GraphicsAreaDirector const*);
    getName() const;
};

} 
