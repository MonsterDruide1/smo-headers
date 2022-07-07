#pragma once

namespace nn { namespace nex { namespace _DDL_Property {

operator=(nn::nex::_DDL_Property const&);
operator==(nn::nex::_DDL_Property const&) const;
Add(nn::nex::Message*, nn::nex::_DDL_Property const&);
Extract(nn::nex::Message*, nn::nex::_DDL_Property*);

} } } 
