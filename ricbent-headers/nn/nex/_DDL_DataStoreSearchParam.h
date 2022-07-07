#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSearchParam
{
public:
    operator=(nn::nex::_DDL_DataStoreSearchParam const&);
    operator==(nn::nex::_DDL_DataStoreSearchParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchParam*);
    ~_DDL_DataStoreSearchParam();
};

} } 
