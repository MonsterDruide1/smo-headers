#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSearchResult
{
public:
    ~_DDL_DataStoreSearchResult();
    operator=(nn::nex::_DDL_DataStoreSearchResult const&);
    operator==(nn::nex::_DDL_DataStoreSearchResult const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchResult const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchResult*);
};

} } 
