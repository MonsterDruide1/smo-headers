#pragma once

namespace al { 

class ModelDrawerDeferredSilhouette
{
public:
    ModelDrawerDeferredSilhouette(char const*, al::SilhouetteDrawCategory);
    ~ModelDrawerDeferredSilhouette();
    createTable();
    draw() const;
};

} 
