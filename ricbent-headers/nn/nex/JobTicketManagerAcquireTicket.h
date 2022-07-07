#pragma once

namespace nn { namespace nex { 

class JobTicketManagerAcquireTicket
{
public:
    JobTicketManagerAcquireTicket(unsigned int, nn::nex::TicketManager*, unsigned long, unsigned long, nn::nex::Ticket**);
    PrepareCall();
    ~JobTicketManagerAcquireTicket();
    CompleteJob(nn::nex::CallContext::State);
    AcquireTicketCompletionCallback(nn::nex::CallContext*, nn::nex::UserContext const*);
    ProcessResponse();
};

} } 
