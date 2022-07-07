#pragma once

namespace nn { namespace nex { 

class NintendoPresence
{
public:
    SetGameKey(nn::nex::GameKey const&);
    SetGameModeDescription(nn::nex::String const&);
    SetJoinAvailabilityFlag(unsigned int);
    SetMatchmakeSystemType(unsigned char);
    SetJoinGameID(unsigned int);
    SetJoinGameMode(unsigned int);
    SetOwnerPrincipalID(unsigned long);
    SetJoinGroupID(unsigned int);
    SetApplicationArg(nn::nex::qVector<unsigned char> const&);
    Set(nn::nex::NintendoPresence const&);
    Merge(nn::nex::NintendoPresence const&);
    Compares(nn::nex::NintendoPresence const&, unsigned int*) const;
    ~NintendoPresence();
};

} } 
