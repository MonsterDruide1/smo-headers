#pragma once

namespace nn { namespace nex { 

class AnyDataAdapter
{
public:
    AnyDataAdapter();
    ~AnyDataAdapter();
    UnregisterAllPrototypes();
    Register();
    Unregister();
    CreateObject(nn::nex::String const&, bool) const;
    FindPrototype(nn::nex::String const&) const;
    StreamIn(nn::nex::Message*, nn::nex::Data const&) const;
    StreamOut(nn::nex::Message*, nn::nex::Data**) const;
    RegisterPrototype(nn::nex::Data*);
    UnregisterPrototype(nn::nex::String const&);
    s_oInstance;
};

} } 
