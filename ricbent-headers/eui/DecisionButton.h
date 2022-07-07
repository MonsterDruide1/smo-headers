#pragma once

namespace eui { 

class DecisionButton
{
public:
    getClassName() const;
    DecisionButton(eui::DecisionButton const&, eui::LayoutEx*, sead::Heap*);
    ProcessOn();
    ProcessOff();
    FinishDown();
    GetRuntimeTypeInfo() const;
    ~DecisionButton();
    GetRuntimeTypeInfoStatic();
};

} 
