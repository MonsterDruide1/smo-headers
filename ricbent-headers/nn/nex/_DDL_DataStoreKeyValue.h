#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreKeyValue
{
public:
    ~_DDL_DataStoreKeyValue();
    operator=(nn::nex::_DDL_DataStoreKeyValue const&);
    operator==(nn::nex::_DDL_DataStoreKeyValue const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreKeyValue const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreKeyValue*);
};

} } 
