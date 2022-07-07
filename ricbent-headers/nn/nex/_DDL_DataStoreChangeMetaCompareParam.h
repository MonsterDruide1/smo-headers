#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreChangeMetaCompareParam
{
public:
    operator=(nn::nex::_DDL_DataStoreChangeMetaCompareParam const&);
    operator==(nn::nex::_DDL_DataStoreChangeMetaCompareParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreChangeMetaCompareParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreChangeMetaCompareParam*);
    ~_DDL_DataStoreChangeMetaCompareParam();
    _DDL_DataStoreChangeMetaCompareParam(nn::nex::_DDL_DataStoreChangeMetaCompareParam const&);
};

} } 
