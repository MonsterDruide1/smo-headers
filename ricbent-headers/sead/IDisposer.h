#pragma once

namespace sead { 

class IDisposer
{
public:
    IDisposer();
    IDisposer(sead::Heap*, sead::IDisposer::HeapNullOption);
    ~IDisposer();
};

} 
