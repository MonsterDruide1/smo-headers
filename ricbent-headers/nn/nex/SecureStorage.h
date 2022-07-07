#pragma once

namespace nn { namespace nex { 

class SecureStorage
{
public:
    SecureStorage(nn::nex::Key const&);
    ~SecureStorage();
    Read();
    Write(nn::nex::String const&);
};

} } 
