#pragma once

namespace nn { namespace nex { namespace ErrorCodeConverter {

ConvertToNetworkErrorCode(nn::nex::qResult const&);
ConvertToNetworkErrorCode(unsigned int);
ConvertToErrorCodeStruct(nn::nex::qResult const&);
ConvertToErrorCodeStruct(unsigned int);

} } } 
