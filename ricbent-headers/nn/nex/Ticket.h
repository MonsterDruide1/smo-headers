#pragma once

namespace nn { namespace nex { 

class Ticket
{
public:
    Ticket(unsigned long, unsigned long, nn::nex::Key const&, nn::nex::DateTime);
    Ticket(nn::nex::Buffer const&, unsigned long);
    Ticket(nn::nex::Buffer const&, unsigned long, unsigned long, nn::nex::Key const&, nn::nex::DateTime);
    ~Ticket();
    Encrypt(nn::nex::KerberosEncryption*, nn::nex::Key const&);
    Decrypt(nn::nex::KerberosEncryption*, nn::nex::Key const&);
    Trace(unsigned long) const;
    IsValid() const;
};

} } 
