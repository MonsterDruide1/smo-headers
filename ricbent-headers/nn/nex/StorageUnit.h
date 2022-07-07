#pragma once

namespace nn { namespace nex { namespace StorageUnit {

AppendData(nn::nex::StorageUnit const*, nn::nex::StorageUnit*);
CopyData(nn::nex::StorageUnit const*, nn::nex::StorageUnit*);
Reserve(unsigned long);
GetReservedSize() const;

} } } 
