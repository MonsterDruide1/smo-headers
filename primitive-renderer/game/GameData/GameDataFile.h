/**
 * @file GameDataFile.h
 * @brief Holds data for an individual save file.
 */

#pragma once

#include "types.h"
#include "GameProgressData.h"
#include "UniqueObjInfo.h"

class GameDataFile
{
    public:
        void wearCostume(char const *);
        void wearCap(char const *);
        bool isGotShine(int) const; // int must be less than 0x3FF (1023)
        void setGotShine(int); // no idea how this one works lol
        
        undefined padding[0x5C8];
        UniqObjInfo mUniqueInfo[0x100]; // 0x5C8

        // other repo:
        // unsigned char padding_6A8[0x6A8];
        // GameProgressData *mGameProgressData; // 0x6A8
        // undefined padding_9F0[0x340];
        // int curWorldId;
};
