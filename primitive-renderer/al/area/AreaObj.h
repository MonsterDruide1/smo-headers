#pragma once

#include "AreaShape.h"

// this header is FUCKED
namespace al
{
    class StageSwitchKeeper;
    class AreaInitInfo;
    class PlacementInfo;
    class SceneObjHolder;
    
    class AreaObj {
        public:
        AreaObj(char const *);
        //virtual const char *getName(void) const override;
        //virtual StageSwitchKeeper *getStageSwitchKeeper(void) const override;
        //virtual void initStageSwitchKeeper(void) override;
        //virtual void init(al::AreaInitInfo const&);
        //virtual bool isInVolume(sead::Vector3f const&) const;
        //virtual bool isInVolumeOffset(sead::Vector3f const&, float) const;
        //virtual SceneObjHolder *getSceneObjHolder(void) const override; 
        unsigned char padding_0[0x18];
        AreaShape* mAreaShape; // 0x18
        StageSwitchKeeper *mStageSwitchKeeper;
        SceneObjHolder *mSceneObjHolder;
        sead::Matrix34f mAreaMtx;
        al::PlacementInfo *mPlacementInfo;
        int mPriority;
    };
}