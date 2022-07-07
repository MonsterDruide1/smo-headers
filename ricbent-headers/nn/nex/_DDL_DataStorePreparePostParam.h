#pragma once

namespace nn { namespace nex { 

class _DDL_DataStorePreparePostParam
{
public:
    ~_DDL_DataStorePreparePostParam();
    operator=(nn::nex::_DDL_DataStorePreparePostParam const&);
    operator==(nn::nex::_DDL_DataStorePreparePostParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStorePreparePostParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStorePreparePostParam*);
    _DDL_DataStorePreparePostParam(nn::nex::_DDL_DataStorePreparePostParam const&);
};

} } 
