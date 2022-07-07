#pragma once

namespace al { 

class MaterialCategoryParam
{
public:
    MaterialCategoryParam();
    setCategoryName(al::MaterialCategoryKeeper const*);
    findCategoryParam(char const*) const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
