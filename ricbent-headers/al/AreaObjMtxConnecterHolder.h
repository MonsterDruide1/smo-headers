#pragma once

namespace al { 

class AreaObjMtxConnecterHolder
{
public:
    AreaObjMtxConnecterHolder(int);
    tryAddArea(al::AreaObj*, al::PlacementInfo const&);
    registerParentMtx(sead::Matrix34<float> const*, al::PlacementInfo const&, al::ValidatorBase const*);
    registerSyncParentMtx(sead::Matrix34<float> const*, al::PlacementInfo const&, al::ValidatorBase const*);
    update();
};

} 
