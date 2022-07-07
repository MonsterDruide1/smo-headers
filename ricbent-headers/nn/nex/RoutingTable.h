#pragma once

namespace nn { namespace nex { 

class RoutingTable
{
public:
    PeriodicHouseCleaning(nn::nex::Time const*);
    Find(nn::nex::InetAddress const&, nn::nex::InetAddress&) const;
    Add(nn::nex::InetAddress const&, nn::nex::InetAddress const&, bool);
    Remove(nn::nex::InetAddress const&);
    RoutingTable(unsigned int);
    Clean();
};

} } 
