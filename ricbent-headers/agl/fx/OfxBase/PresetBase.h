#pragma once

namespace agl { namespace fx { namespace OfxBase { 

class PresetBase
{
public:
    PresetBase();
    initializeOfx(agl::fx::OfxBase::PresetBase::CreateArg const&, agl::fx::OccludedEffectMgr*, int, int, sead::Heap*);
    getOfxTypeID() const;
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    copy(agl::fx::OfxBase::PresetBase const&);
    genMessage(sead::hostio::Context*);
    writeToXML(int, sead::XmlElement*, sead::Heap*) const;
    initialize(int, sead::Heap*);
    ~PresetBase();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} } } 
