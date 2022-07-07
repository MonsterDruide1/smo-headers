#pragma once

namespace nn { namespace nex { namespace RoutingAddressResolver {

AddMapping(unsigned short, nn::nex::InetAddress const&);
RemoveMappingFromID(unsigned short);
RemoveMappingFromAddress(nn::nex::InetAddress const&);
ResolveToID(nn::nex::InetAddress const&, unsigned short*) const;
ResolveToAddress(unsigned short, nn::nex::InetAddress*) const;
Trace(unsigned long) const;

} } } 
