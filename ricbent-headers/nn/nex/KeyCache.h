#pragma once

namespace nn { namespace nex { namespace KeyCache {

RetrieveKey(unsigned long, char const*, nn::nex::Key*);
RetrieveKey(unsigned long, nn::nex::Buffer const&, nn::nex::Key*);
AddKey(unsigned long, char const*, nn::nex::Key const&);
AddKey(unsigned long, nn::nex::Buffer const&, nn::nex::Key const&);

} } } 
