#pragma once

namespace nn { namespace nex { 

class _DDL_DataStorePrepareUpdateParam
{
public:
    ~_DDL_DataStorePrepareUpdateParam();
    operator=(nn::nex::_DDL_DataStorePrepareUpdateParam const&);
    operator==(nn::nex::_DDL_DataStorePrepareUpdateParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStorePrepareUpdateParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStorePrepareUpdateParam*);
};

} } 
