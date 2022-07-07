#pragma once

namespace nn { namespace nex { namespace KerberosAuthentication {

PrepareConnectionRequest(nn::nex::BitStream*, nn::nex::AuthenticationClient*, nn::nex::Ticket*, unsigned int*);
ValidateConnectionRequest(nn::nex::BitStream*, nn::nex::BitStream*, nn::nex::AuthenticationClient*, unsigned int*, nn::nex::Ticket**);
ValidateConnectionResponse(nn::nex::BitStream*, unsigned int);

} } } 
