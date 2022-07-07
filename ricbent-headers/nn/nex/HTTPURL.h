#pragma once

namespace nn { namespace nex { 

class HTTPURL
{
public:
    HTTPURL(nn::nex::String const&);
    ParseURL(nn::nex::String const&);
    ~HTTPURL();
    ConvertToString() const;
    GetScheme() const;
    GetUsername() const;
    GetPassword() const;
    GetHost() const;
    GetPort() const;
    GetPath() const;
    GetParameters() const;
    GetQuery() const;
    GetFragment() const;
    SetScheme(nn::nex::String const&);
    SetLocation(nn::nex::String const&, unsigned int);
    SetAuthentification(nn::nex::String const&, nn::nex::String const&);
    SetPath(nn::nex::String const&);
    SetParameters(nn::nex::String const&);
    SetQuery(nn::nex::String const&);
    SetFragment(nn::nex::String const&);
    StripLocation() const;
    Escape(nn::nex::String const&);
    Unescape(nn::nex::String const&);
    Trace(unsigned int) const;
};

} } 
