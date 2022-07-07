#pragma once

namespace al { 

class CollisionPartsConnector
{
public:
    CollisionPartsConnector();
    init(sead::Matrix34<float> const*, sead::Matrix34<float> const&, al::CollisionParts const*);
    getConnectingSensor() const;
    isConnecting() const;
    isMoved() const;
    isConnectInvalidCollision() const;
    clear();
};

} 
