#pragma once

namespace al { 

class CameraTicketId
{
public:
    CameraTicketId(al::PlacementId const*, char const*);
    isEqual(al::CameraTicketId const&) const;
    isEqual(al::CameraTicketId const&, al::CameraTicketId const&);
    isEqual(al::ByamlIter const&) const;
    tryGetObjId() const;
    getObjId() const;
};

} 
