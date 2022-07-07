#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreDeleteParam
{
public:
    operator=(nn::nex::_DDL_DataStoreDeleteParam const&);
    operator==(nn::nex::_DDL_DataStoreDeleteParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreDeleteParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreDeleteParam*);
    ~_DDL_DataStoreDeleteParam();
};

} } 
