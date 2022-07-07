#pragma once

namespace al { 

class AreaObjMtxConnecter
{
public:
    AreaObjMtxConnecter(al::AreaObj*, al::PlacementInfo const&);
    trySetParentMtx(sead::Matrix34<float> const*, al::PlacementInfo const&, al::ValidatorBase const*);
    trySyncParentMtx(sead::Matrix34<float> const*, al::PlacementInfo const&, al::ValidatorBase const*);
    update();
};

} 
