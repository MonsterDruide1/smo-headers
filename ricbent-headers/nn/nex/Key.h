#pragma once

namespace nn { namespace nex { 

class Key
{
public:
    GetContentPtr();
    GetLength() const;
    operator=(nn::nex::Key const&);
    Key();
    Key(unsigned char const*, unsigned long);
    Key(unsigned long);
    Key(nn::nex::Key const&);
    Key(nn::nex::String const&);
    ~Key();
    operator==(nn::nex::Key const&) const;
    operator!=(nn::nex::Key const&) const;
    GetContentPtr() const;
    PrepareContentPtr(unsigned long);
    ToString() const;
    ExtractToString(nn::nex::String*) const;
    Trace(unsigned long) const;
    GenerateRandomKey(unsigned long);
};

} } 
