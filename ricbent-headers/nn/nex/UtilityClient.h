#pragma once

namespace nn { namespace nex { 

class UtilityClient
{
public:
    UtilityClient();
    ~UtilityClient();
    Bind(nn::nex::Credentials*);
    Unbind();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    AcquireNexUniqueId(nn::nex::ProtocolCallContext*, unsigned long*);
    AcquireNexUniqueIdWithPassword(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo*);
    AssociateNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo const&);
    AssociateNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::UniqueIdInfo> const&);
    GetAssociatedNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::UniqueIdInfo*);
    GetAssociatedNexUniqueIdWithMyPrincipalId(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::UniqueIdInfo>*);
    IsValidNexUniqueId(unsigned long);
    GetIntegerSettings(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::qMap<unsigned short, int>*);
    GetStringSettings(nn::nex::ProtocolCallContext*, unsigned int, nn::nex::qMap<unsigned short, nn::nex::String>*);
};

} } 
