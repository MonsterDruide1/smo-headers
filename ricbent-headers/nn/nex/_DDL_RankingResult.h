#pragma once

namespace nn { namespace nex { 

class _DDL_RankingResult
{
public:
    ~_DDL_RankingResult();
    operator==(nn::nex::_DDL_RankingResult const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingResult const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingResult*);
    operator=(nn::nex::_DDL_RankingResult const&);
    _DDL_RankingResult(nn::nex::_DDL_RankingResult const&);
};

} } 
