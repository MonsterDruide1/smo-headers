#pragma once

namespace nn { namespace nex { 

class _DDL_RankingOrderParam
{
public:
    operator=(nn::nex::_DDL_RankingOrderParam const&);
    operator==(nn::nex::_DDL_RankingOrderParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingOrderParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingOrderParam*);
    ~_DDL_RankingOrderParam();
};

} } 
