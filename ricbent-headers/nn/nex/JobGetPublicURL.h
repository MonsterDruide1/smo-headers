#pragma once

namespace nn { namespace nex { 

class JobGetPublicURL
{
public:
    JobGetPublicURL(unsigned int, nn::nex::NATTraversalEngine*);
    ~JobGetPublicURL();
    Execute();
    Done();
    SetDefaultPostExecutionState();
};

} } 
