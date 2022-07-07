#pragma once

namespace agl { namespace utl { 

class MultiFilterUnit
{
public:
    getFilterLabel(agl::utl::MultiFilterUnit::FilterType);
    getFilterName(agl::utl::MultiFilterUnit::FilterType);
    MultiFilterUnit(agl::utl::MultiFilterUnit::FilterType, int);
    ~MultiFilterUnit();
    create(agl::utl::MultiFilterUnit::FilterType, int, sead::Heap*);
    initialize(agl::utl::MultiFilter*, sead::TList<agl::utl::MultiFilterUnit*>*, sead::Heap*);
    destroy();
    inactivate();
    activate();
    resetParameters();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    doInitialize_(sead::Heap*);
    doDestroy_();
    doCalcResultInfo_(agl::utl::MultiFilterResultInfo*) const;
    doListenPropertyEvent_(sead::hostio::PropertyEvent const*);
};

} } 
