#pragma once

namespace agl { namespace fx { namespace OfxLensFlare { 

class Preset
{
public:
    Preset();
    ~Preset();
    initializeOfxImpl_(agl::fx::OfxBase::PresetBase::CreateArg const&, sead::Heap*);
    listenPropertyEventImpl_(sead::hostio::PropertyEvent const*);
    genMessageImpl_(sead::hostio::Context*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getTypeID() const;
    getMaxElementNum() const;
    sTypeInfo;
};

} } } 
