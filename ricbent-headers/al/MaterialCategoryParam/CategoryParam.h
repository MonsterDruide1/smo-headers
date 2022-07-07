#pragma once

namespace al { namespace MaterialCategoryParam { 

class CategoryParam
{
public:
    CategoryParam();
    getMapName() const;
    getSphereMapName() const;
    getCategoryName() const;
    isForceRoughness() const;
    isEnableParallaxCubeMap() const;
    getRoughness() const;
    getProgrammableTextureType() const;
};

} } 
