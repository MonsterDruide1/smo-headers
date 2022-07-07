#pragma once

namespace al { 

class SensorConnector
{
public:
    SensorConnector();
    init(sead::Matrix34<float> const*, sead::Matrix34<float> const&, al::HitSensor*);
    getConnectingSensor() const;
    isConnecting() const;
    clear();
};

} 
