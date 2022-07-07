#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreFetchMyInfosResult
{
public:
    ~_DDL_DataStoreFetchMyInfosResult();
    operator=(nn::nex::_DDL_DataStoreFetchMyInfosResult const&);
    operator==(nn::nex::_DDL_DataStoreFetchMyInfosResult const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreFetchMyInfosResult const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreFetchMyInfosResult*);
};

} } 
