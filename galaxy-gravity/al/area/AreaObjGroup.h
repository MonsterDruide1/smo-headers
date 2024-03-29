#pragma once

#include "AreaObj.h"
#include "math/seadVector.h"

namespace al
{
    class AreaObjGroup
    {
        public:
            AreaObjGroup(char const*,int);
            void incrementCount(void);
            void createBuffer(void);
            void createBuffer(int);
            void registerAreaObj(al::AreaObj *);
            al::AreaObj *getAreaObj(int) const;
            al::AreaObj *getInVolumeAreaObj(sead::Vector3f const &) const;

            const char *mGroupName;
            al::AreaObj **mAreaBuffer;
            int mCurCount;
            int mMaxCount;
    };
};
