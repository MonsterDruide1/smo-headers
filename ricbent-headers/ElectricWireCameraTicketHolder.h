#pragma once

class ElectricWireCameraTicketHolder
{
public:
    ElectricWireCameraTicketHolder();
    registerElectricWireCameraTicket(al::CameraTicket*);
    endCameraAll(al::IUseCamera const*);
    getSceneObjName() const;
    ~ElectricWireCameraTicketHolder();
};
