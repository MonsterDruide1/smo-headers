#pragma once

namespace agl { namespace utl { 

class IParameterList
{
public:
    postWrite_() const;
    isApply_(agl::utl::ResParameterList) const;
    callbackNotAppliable_(agl::utl::IParameterObj*, agl::utl::ParameterBase*, agl::utl::ResParameterObj);
    callbackNotInterpolatable_(agl::utl::IParameterObj*, agl::utl::ParameterBase*, agl::utl::ResParameterObj, agl::utl::ResParameterObj, agl::utl::ResParameter, agl::utl::ResParameter, float);
    ~IParameterList();
    preWrite_() const;
    preRead_();
    postRead_();
    IParameterList();
    setParameterListName_(sead::SafeStringBase<char> const&);
    addList(agl::utl::IParameterList*, sead::SafeStringBase<char> const&);
    addObj(agl::utl::IParameterObj*, sead::SafeStringBase<char> const&);
    clearList();
    clearObj();
    removeList(agl::utl::IParameterList*);
    removeObj(agl::utl::IParameterObj*);
    applyResParameterList(agl::utl::ResParameterList);
    applyResParameterList_(bool, agl::utl::ResParameterList, agl::utl::ResParameterList, float);
    applyResParameterList(agl::utl::ResParameterList, agl::utl::ResParameterList, float);
    searchResParameterObj_(agl::utl::ResParameterList, agl::utl::IParameterObj const&) const;
    searchChildParameterObj_(agl::utl::ResParameterObj, agl::utl::IParameterObj*) const;
    applyResParameterObjB_(bool, agl::utl::ResParameterList, float);
    searchResParameterList_(agl::utl::ResParameterList, agl::utl::IParameterList const&) const;
    searchChildParameterList_(agl::utl::ResParameterList) const;
    applyResParameterListB_(bool, agl::utl::ResParameterList, float);
    isComplete(agl::utl::ResParameterList, bool) const;
    createAttribute(sead::XmlElement*, sead::Heap*) const;
    getTagName();
    getParameterListName() const;
    writeToXML(sead::XmlElement*, sead::Heap*) const;
    readFromXML(sead::XmlElement const&, bool);
    verify() const;
    verifyList() const;
    verifyObj() const;
    verifyObj(agl::utl::IParameterObj*, agl::utl::IParameterObj*) const;
    verifyList(agl::utl::IParameterList*, agl::utl::IParameterList*) const;
    sortByHash();
    genMessageParameterList(sead::hostio::Context*);
    listenPropertyEventParameter(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
};

} } 
