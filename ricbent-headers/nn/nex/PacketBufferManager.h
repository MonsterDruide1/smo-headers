#pragma once

namespace nn { namespace nex { 

class PacketBufferManager
{
public:
    PacketBufferManager();
    ~PacketBufferManager();
    Destroy();
    GetSimpleUnitHeapParam(unsigned long, unsigned long, nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam>&);
    GetRequiredMemorySize(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam> const&);
    CheckUnitHeapParam(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam> const&);
    GetRequiredMemorySizeImpl(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam> const&);
    GetPacketManagementUnitHeapParam(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam>&, nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam> const&);
    GetUnitNum(unsigned long, unsigned long);
    SetUnitHeapParam(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam> const&);
    IsActive();
    EnablePacketBufferPool(bool);
    IsEnablePacketBufferPool();
    IsActiveNonStatic();
    IsClean();
    GetUnitHeapParam(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam>&);
    GetUnitHeapDebugInfo(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapDebugInfo>&);
    GetAllUnitHeapDebugInfo(nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapDebugInfo>&);
    Dump(unsigned long);
    ResetUnitHeapDebugInfo();
    Initialize();
    PacketBufferAllocate(unsigned long);
    PacketManagementObjectAllocate(unsigned long);
    Finalize();
    GetMaxUnitSize();
    GetProperUnitSize(unsigned long);
    IsAllocatable(unsigned long, unsigned long);
    Allocate(unsigned long);
    AllocateManagementObject(unsigned long);
    PacketBufferFree(void*);
    PacketManagementObjectFree(void*);
    s_csSettingLock;
};

} } 
