#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreFetchMyInfosParam
{
public:
    ~_DDL_DataStoreFetchMyInfosParam();
    operator=(nn::nex::_DDL_DataStoreFetchMyInfosParam const&);
    operator==(nn::nex::_DDL_DataStoreFetchMyInfosParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreFetchMyInfosParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreFetchMyInfosParam*);
};

} } 
