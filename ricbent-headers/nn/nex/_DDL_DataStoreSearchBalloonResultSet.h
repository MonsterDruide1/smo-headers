#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSearchBalloonResultSet
{
public:
    ~_DDL_DataStoreSearchBalloonResultSet();
    operator=(nn::nex::_DDL_DataStoreSearchBalloonResultSet const&);
    operator==(nn::nex::_DDL_DataStoreSearchBalloonResultSet const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchBalloonResultSet const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchBalloonResultSet*);
};

} } 
