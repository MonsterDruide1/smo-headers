#pragma once

namespace eui { 

class TraceGaugeControl
{
public:
    getClassName() const;
    TraceGaugeControl();
    TraceGaugeControl(eui::TraceGaugeControl const&, eui::LayoutEx*, sead::Heap*);
    initialize(nn::ui2d::ControlSrc const&, eui::LayoutEx*);
    Update(float);
    applyAnimation_();
    setGaugeValue(float);
    setTracingSpeed(float);
    setTracingFraction(float);
    setTracingWait(float);
    setShortageThreshold(float, float);
    setTracingValue(float);
    GetRuntimeTypeInfo() const;
    ~TraceGaugeControl();
};

} 
