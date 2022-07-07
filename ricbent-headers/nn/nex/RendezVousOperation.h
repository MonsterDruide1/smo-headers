#pragma once

namespace nn { namespace nex { 

class RendezVousOperation
{
public:
    RendezVousOperation(nn::nex::BackEndServices&);
    ~RendezVousOperation();
    GetBackEndServices();
    GetCredentials();
    TraceImpl(nn::nex::Operation::Event, unsigned long) const;
};

} } 
