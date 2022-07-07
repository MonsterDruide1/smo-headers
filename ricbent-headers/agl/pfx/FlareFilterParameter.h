#pragma once

namespace agl { namespace pfx { 

class FlareFilterParameter
{
public:
    FlareFilterParameter();
    initialize(agl::utl::IParameterObj*, sead::Heap*);
    genMessageFlareFilterParameter(sead::hostio::Context*);
    listenPropertyEventFlareFilterParameter(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
    ~FlareFilterParameter();
};

} } 
