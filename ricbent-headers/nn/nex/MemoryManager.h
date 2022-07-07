#pragma once

namespace nn { namespace nex { 

class MemoryManager
{
public:
    MemoryManager(char const*);
    ~MemoryManager();
    Allocate(unsigned long);
    GenericMalloc(unsigned long);
    AllocateForPbPool(void*, void (*)(void*), void*);
    Free(void*);
    GenericFree(void (*)(void*), void*);
    AllocateThreadSafe(unsigned long);
    FreeThreadSafe(void*);
    IncreaseMemUsage(unsigned long);
    DecreaseMemUsage(unsigned long);
    GetDefaultMemoryManager();
    ShutdownDefaultMemoryManager();
    Trace();
    GetInstructionTypeString(nn::nex::MemoryManager::_InstructionType) const;
    BeginProtection();
    EndProtection();
    s_fcnMalloc;
    s_fcnFree;
    s_eShutDownState;
};

} } 
