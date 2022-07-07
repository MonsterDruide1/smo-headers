#pragma once

namespace al { 

class ModelDrawerDeferredSky
{
public:
    ModelDrawerDeferredSky(char const*);
    createTable();
    draw() const;
    ~ModelDrawerDeferredSky();
};

} 
