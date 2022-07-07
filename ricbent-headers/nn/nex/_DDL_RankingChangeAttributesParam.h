#pragma once

namespace nn { namespace nex { 

class _DDL_RankingChangeAttributesParam
{
public:
    operator=(nn::nex::_DDL_RankingChangeAttributesParam const&);
    operator==(nn::nex::_DDL_RankingChangeAttributesParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingChangeAttributesParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingChangeAttributesParam*);
    ~_DDL_RankingChangeAttributesParam();
};

} } 
