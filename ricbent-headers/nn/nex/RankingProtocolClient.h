#pragma once

namespace nn { namespace nex { 

class RankingProtocolClient
{
public:
    CallUploadScore(nn::nex::ProtocolCallContext*, nn::nex::RankingScoreData const&, unsigned long const&);
    CallDeleteScore(nn::nex::ProtocolCallContext*, unsigned int const&, unsigned long const&);
    CallDeleteAllScores(nn::nex::ProtocolCallContext*, unsigned long const&);
    CallUploadCommonData(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned char> const&, unsigned long const&);
    CallDeleteCommonData(nn::nex::ProtocolCallContext*, unsigned long const&);
    CallChangeAttributes(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::RankingChangeAttributesParam const&, unsigned long const&);
    CallChangeAllAttributes(nn::nex::ProtocolCallContext*, nn::nex::RankingChangeAttributesParam const&, unsigned long const&);
    CallGetCommonData(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned char>*, unsigned long const&);
    CallGetRanking(nn::nex::ProtocolCallContext*, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&, unsigned long const&);
    CallGetCachedTopXRankings(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned int> const&, nn::nex::qVector<nn::nex::RankingOrderParam> const&, nn::nex::qVector<nn::nex::RankingCachedResult>*);
    CallGetCachedTopXRanking(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingCachedResult*);
    CallGetApproxOrder(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::RankingOrderParam const&, unsigned int const&, unsigned int*, unsigned long const&, unsigned long const&);
    CallGetStats(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::RankingOrderParam const&, unsigned int const&, nn::nex::RankingStats*);
    CallGetRankingByPIDList(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&);
    CallGetRankingByUniqueIdList(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&);
    RankingProtocolClient(unsigned short);
    UploadScore_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::RankingScoreData const&, unsigned long const&);
    ProtoReturn_UploadScore(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    DeleteScore_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, unsigned long const&);
    ProtoReturn_DeleteScore(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    DeleteAllScores_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned long const&);
    ProtoReturn_DeleteAllScores(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    UploadCommonData_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<unsigned char> const&, unsigned long const&);
    ProtoReturn_UploadCommonData(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    DeleteCommonData_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned long const&);
    ProtoReturn_DeleteCommonData(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetCommonData_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<unsigned char>*, unsigned long const&);
    ProtoReturn_GetCommonData(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ChangeAttributes_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::RankingChangeAttributesParam const&, unsigned long const&);
    ProtoReturn_ChangeAttributes(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ChangeAllAttributes_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::RankingChangeAttributesParam const&, unsigned long const&);
    ProtoReturn_ChangeAllAttributes(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetRanking_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&, unsigned long const&);
    ProtoReturn_GetRanking(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetApproxOrder_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::RankingOrderParam const&, unsigned int const&, unsigned int*, unsigned long const&, unsigned long const&);
    ProtoReturn_GetApproxOrder(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetStats_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::RankingOrderParam const&, unsigned int const&, nn::nex::RankingStats*);
    ProtoReturn_GetStats(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetRankingByPIDList_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<unsigned long> const&, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&);
    ProtoReturn_GetRankingByPIDList(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetRankingByUniqueIdList_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<unsigned long> const&, unsigned char const&, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingResult*, unsigned long const&);
    ProtoReturn_GetRankingByUniqueIdList(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetCachedTopXRanking_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::RankingOrderParam const&, nn::nex::RankingCachedResult*);
    ProtoReturn_GetCachedTopXRanking(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetCachedTopXRankings_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<unsigned int> const&, nn::nex::qVector<nn::nex::RankingOrderParam> const&, nn::nex::qVector<nn::nex::RankingCachedResult>*);
    ProtoReturn_GetCachedTopXRankings(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~RankingProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
