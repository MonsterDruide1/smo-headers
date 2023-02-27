#pragma once

#include "sead/prim/seadSafeString.hpp"
#include <basis/seadTypes.h>

class UniqObjInfo {
    public:
        bool isEqual(char const *, char const *);
        void set();  

        u8 structSize[0x138];
};

static_assert(sizeof(UniqObjInfo) == 0x138);
