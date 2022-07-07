#pragma once

namespace nn { namespace nex { 

class _Proto_RankingProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_UploadScore(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_DeleteScore(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_UploadCommonData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetCommonData(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_ChangeAttributes(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_ChangeAllAttributes(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetRanking(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetApproxOrder(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetStats(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetRankingByPIDList(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetRankingByUniqueIdList(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetCachedTopXRanking(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ProtoStub_GetCachedTopXRankings(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_RankingProtocolServer*);
    ~_Proto_RankingProtocolServer();
};

} } 
