#pragma once

namespace eui { 

class ButtonBase
{
public:
    getClassName() const;
    ButtonBase();
    On();
    ResumeUpdate();
    Off();
    Down();
    Cancel();
    ForceOff();
    ForceOn();
    ForceDown();
    Update(float);
    ProcessActionFromQueue();
    SetActive(bool);
    ProcessOn();
    ProcessOff();
    ProcessDown();
    ProcessCancel();
    UpdateOn();
    UpdateOff();
    UpdateDown();
    UpdateCancel();
    StartOn();
    StartOff();
    StartDown();
    StartCancel();
    FinishOn();
    FinishOff();
    FinishDown();
    FinishCancel();
    ChangeState(eui::ButtonBase::State);
    ForceChangeState(eui::ButtonBase::State);
    IsDowning() const;
    GetRuntimeTypeInfo() const;
    ~ButtonBase();
};

} 
