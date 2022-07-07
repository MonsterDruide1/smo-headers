#pragma once

namespace nn { namespace nex { 

class RankingClient
{
public:
    RankingClient();
    ~RankingClient();
    Bind(nn::nex::Credentials*);
    Unbind();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    UploadScore(nn::nex::ProtocolCallContext*, nn::nex::RankingScoreData const&, unsigned long);
    DeleteScore(nn::nex::ProtocolCallContext*, unsigned int, unsigned long);
    DeleteScore(nn::nex::ProtocolCallContext*, unsigned long);
    UploadCommonData(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned char> const&, unsigned long);
    UploadCommonData(nn::nex::ProtocolCallContext*, void const*, unsigned char, unsigned long);
    DeleteCommonData(nn::nex::ProtocolCallContext*, unsigned long);
    ChangeAttributes(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::RankingChangeAttributesParam const&, unsigned long);
    ChangeAttributes(nn::nex::ProtocolCallContext*, nn::nex::RankingChangeAttributesParam const&, unsigned long);
    GetCommonData(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned char>*, unsigned long);
    GetRanking(nn::nex::ProtocolCallContext*, nn::nex::RankingConstants::RankingMode, unsigned int, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long, unsigned long);
    GetCachedTopXRankings(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned int> const&, nn::nex::qVector<nn::nex::RankingOrderParam> const&, nn::nex::qVector<nn::nex::RankingCachedResult>*);
    GetCachedTopXRankings(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned int> const&, nn::nex::RankingOrderParam const&, nn::nex::qVector<nn::nex::RankingCachedResult>*);
    GetCachedTopXRanking(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::RankingOrderParam const&, nn::nex::RankingCachedResult*);
    GetApproxOrder(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::RankingOrderParam const&, unsigned int, unsigned int*, unsigned long, unsigned long);
    GetStats(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::RankingOrderParam const&, unsigned int, nn::nex::RankingStats*);
    GetRankingByPIDList(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long>&, nn::nex::RankingConstants::RankingMode, unsigned int, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long);
    GetRankingByUniqueIdList(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long>&, nn::nex::RankingConstants::RankingMode, unsigned int, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long);
};

} } 
