#pragma once

namespace nn { namespace nex { namespace PacketBufferMultiUnitHeap {

ResetDebugInfo() const;
Initialize(void*, unsigned long, nn::nex::qVector<nn::nex::PacketBufferManager::UnitHeapParam>);
IsAllocatable(unsigned long, unsigned long);
Allocate(unsigned long, void (*)(void*));

} } } 
