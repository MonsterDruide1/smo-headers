#pragma once

namespace agl { namespace utl { 

class INamedObjMgr
{
public:
    INamedObjMgr();
    ~INamedObjMgr();
    initialize(unsigned int, unsigned int, sead::Heap*);
    pushBackNamedObj(agl::utl::INamedObj*);
    eraseNamedObj(agl::utl::INamedObj*);
    updateList();
    syncNameToIndex();
    constructList();
    constructListByName(bool);
    constructListByGroup(bool);
    genGroupComboBox(sead::hostio::Context*);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    getNamedObjName(int, int) const;
    getNamedObjNum(int) const;
    getSaveFilePath() const;
    listenPropertyEventFromGroup(agl::utl::INamedObjMgr::GroupEventType, agl::utl::INamedObjMgr::Group*);
};

} } 
