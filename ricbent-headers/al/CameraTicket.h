#pragma once

namespace al { 

class CameraTicket
{
public:
    CameraTicket(al::CameraPoser*, al::CameraTicketId const*, int);
    setPriority(int);
};

} 
