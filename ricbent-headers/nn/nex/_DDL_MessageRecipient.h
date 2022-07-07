#pragma once

namespace nn { namespace nex { namespace _DDL_MessageRecipient {

operator=(nn::nex::_DDL_MessageRecipient const&);
operator==(nn::nex::_DDL_MessageRecipient const&) const;
Add(nn::nex::Message*, nn::nex::_DDL_MessageRecipient const&);
Extract(nn::nex::Message*, nn::nex::_DDL_MessageRecipient*);

} } } 
