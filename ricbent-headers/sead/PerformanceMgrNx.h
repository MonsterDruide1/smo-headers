#pragma once

namespace sead { namespace PerformanceMgrNx {

initialize();
setPerformanceConfiguration(nn::oe::PerformanceMode, int);
printPerformance();
printPerformanceForConfiguration_(int);
setCPUPerformance1122MHz();
isDockIn();
startPowerMeasuring();
setPeriodicPowerReportEnable(bool);
getPowerMeasuringValue(sead::PerformanceMgrNx::PowerMeasuringPoint);
getAveragePowerMeasuringValue(sead::PerformanceMgrNx::PowerMeasuringPoint);
printAveragePowerMeasuringValue();
resetAveragePowerMeasuring();
toBatteryDurationHour(unsigned short);
getBatteryDurationHour();
sPerformanceConfigurationForNormal;
sPerformanceConfigurationForBoost;

} } 
