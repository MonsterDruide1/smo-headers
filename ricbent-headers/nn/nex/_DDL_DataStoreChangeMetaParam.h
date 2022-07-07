#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreChangeMetaParam
{
public:
    operator=(nn::nex::_DDL_DataStoreChangeMetaParam const&);
    operator==(nn::nex::_DDL_DataStoreChangeMetaParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreChangeMetaParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreChangeMetaParam*);
    _DDL_DataStoreChangeMetaParam();
    ~_DDL_DataStoreChangeMetaParam();
    _DDL_DataStoreChangeMetaParam(nn::nex::_DDL_DataStoreChangeMetaParam const&);
};

} } 
