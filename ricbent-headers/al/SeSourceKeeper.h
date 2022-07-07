#pragma once

namespace al { 

class SeSourceKeeper
{
public:
    SeSourceKeeper(int);
    initSeBarrier(al::AreaObjDirector*);
    setListenerPosPtr(int, sead::Vector3<float> const*);
    setListenerMtx(int, sead::Matrix34<float> const*);
    update(bool);
    tryAddNew(al::SeEmitter*);
    getAreaObjDirector() const;
};

} 
