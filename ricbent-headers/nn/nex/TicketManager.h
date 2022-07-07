#pragma once

namespace nn { namespace nex { 

class TicketManager
{
public:
    ValidateAndAcquireSecureConnectionData(nn::nex::CallContext*, nn::nex::qResult*, nn::nex::String const&, char const*, unsigned long*, nn::nex::RVConnectionData*, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    FindTicket(unsigned long);
    InsertTicket(unsigned long, nn::nex::Ticket*);
    TicketManager(nn::nex::AuthenticationClient*);
    ~TicketManager();
    AcquireTicket(nn::nex::CallContext*, unsigned long, unsigned long, nn::nex::Ticket**);
    ReleaseTicket(nn::nex::Ticket*);
};

} } 
