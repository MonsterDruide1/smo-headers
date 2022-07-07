#pragma once

namespace al { 

class CameraTicketHolder
{
public:
    CameraTicketHolder(int);
    endInit();
    registerTicket(al::CameraTicket*);
    registerDefaultTicket(al::CameraTicket*);
    tryFindEntranceTicket(al::PlacementId const*, char const*) const;
};

} 
