#pragma once

namespace nn { namespace nex { 

class InterfaceTable
{
public:
    InterfaceTable();
    ~InterfaceTable();
    cleanup();
    Query();
    GetNbInterface();
    GetNbLoopbackInterface();
    operator[](unsigned int);
    Trace(unsigned long);
};

} } 
