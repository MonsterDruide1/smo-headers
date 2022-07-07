#pragma once

namespace nn { namespace nex { 

class UtilityProtocolClient
{
public:
    CallAcquireNexUniqueId(nn::nex::ProtocolCallContext*, unsigned long*);
    CallAcquireNexUniqueIdWithPassword(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo*);
    CallAssociateNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo const&);
    CallAssociateNexUniqueIdsWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::UniqueIdInfo> const&);
    CallGetAssociatedNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo*);
    CallGetAssociatedNexUniqueIdsWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::UniqueIdInfo>*);
    CallGetIntegerSettings(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::qMap<unsigned short, int>*);
    CallGetStringSettings(nn::nex::ProtocolCallContext*, unsigned int const&, nn::nex::qMap<unsigned short, nn::nex::String>*);
    UtilityProtocolClient(unsigned short);
    AcquireNexUniqueId_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned long*);
    ProtoReturn_AcquireNexUniqueId(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    AcquireNexUniqueIdWithPassword_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::UniqueIdInfo*);
    ProtoReturn_AcquireNexUniqueIdWithPassword(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    AssociateNexUniqueIdWithMyPrincipalId_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::UniqueIdInfo const&);
    ProtoReturn_AssociateNexUniqueIdWithMyPrincipalId(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    AssociateNexUniqueIdsWithMyPrincipalId_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<nn::nex::UniqueIdInfo> const&);
    ProtoReturn_AssociateNexUniqueIdsWithMyPrincipalId(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetAssociatedNexUniqueIdWithMyPrincipalId_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::UniqueIdInfo*);
    ProtoReturn_GetAssociatedNexUniqueIdWithMyPrincipalId(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetAssociatedNexUniqueIdsWithMyPrincipalId_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qVector<nn::nex::UniqueIdInfo>*);
    ProtoReturn_GetAssociatedNexUniqueIdsWithMyPrincipalId(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetIntegerSettings_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::qMap<unsigned short, int>*);
    ProtoReturn_GetIntegerSettings(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetStringSettings_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, unsigned int const&, nn::nex::qMap<unsigned short, nn::nex::String>*);
    ProtoReturn_GetStringSettings(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~UtilityProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
