#pragma once

namespace agl { namespace pfx { 

class BloomParameter
{
public:
    BloomParameter();
    initialize(agl::utl::IParameterObj*, sead::Heap*);
    updateBalance_();
    genMessageBloomParameter(sead::hostio::Context*);
    listenPropertyEventBloomParameter(sead::hostio::Reflexible*, sead::hostio::PropertyEvent const*);
};

} } 
