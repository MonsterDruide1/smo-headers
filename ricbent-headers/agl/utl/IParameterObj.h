#pragma once

namespace agl { namespace utl { 

class IParameterObj
{
public:
    IParameterObj();
    pushBackListNode(agl::utl::ParameterBase*);
    createAttribute(sead::XmlElement*, sead::Heap*) const;
    getTagName();
    getParameterObjName() const;
    writeToXML(sead::XmlElement*, sead::Heap*) const;
    readFromXML(sead::XmlElement const&, bool);
    applyResParameterObj(agl::utl::ResParameterObj, agl::utl::ResParameterObj, float, agl::utl::IParameterList*);
    applyResParameterObj_(bool, agl::utl::ResParameterObj, agl::utl::ResParameterObj, float, agl::utl::IParameterList*);
    isComplete(agl::utl::ResParameterObj, bool) const;
    searchParameter_(unsigned int);
    searchParameter_(unsigned int) const;
    copy(agl::utl::ParameterBase*, agl::utl::ParameterBase*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*);
    copy_(agl::utl::ParameterBase*, agl::utl::ParameterBase*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*);
    copy(agl::utl::IParameterObj const&);
    copyLerp(agl::utl::ParameterBase*, agl::utl::ParameterBase*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, float);
    copyLerp_(agl::utl::ParameterBase*, agl::utl::ParameterBase*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, agl::utl::ParameterBase const*, float);
    copyLerp(agl::utl::IParameterObj const&, agl::utl::IParameterObj const&, float);
    genMessageParameter(sead::hostio::Context*);
    listenPropertyEventParameter(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
    verify() const;
    verify(agl::utl::ParameterBase*, agl::utl::ParameterBase*) const;
    sortByHash();
    ~IParameterObj();
    preWrite_() const;
    postWrite_() const;
    preRead_();
    postRead_();
    preCopy_();
    postCopy_();
    isApply_(agl::utl::ResParameterObj) const;
};

} } 
