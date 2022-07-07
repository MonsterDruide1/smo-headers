#pragma once

namespace al { 

class SeMaterialInfoKeeper
{
public:
    SeMaterialInfoKeeper(al::SeDataBase*);
    findReplacedId(unsigned int, char const*, int, al::SeResourceSpecificInfo const*) const;
    setMaterialCodeList(al::CollisionCodeList*, al::CollisionCodeList*);
};

} 
