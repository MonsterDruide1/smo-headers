#pragma once

namespace al { 

class ModelMaterialCategory
{
public:
    ModelMaterialCategory(al::ModelCtrl*, al::MaterialCategoryKeeper*);
    init(char const*);
    init(al::ByamlIter const&);
    getCategoryIdFromMaterialName(char const*) const;
    getCategoryIdFromMaterialIndex(int) const;
    tryCreate(al::ModelCtrl*, al::Resource const*, char const*, al::MaterialCategoryKeeper*);
    tryCreate(al::ModelCtrl*, char const*, al::MaterialCategoryKeeper*);
};

} 
