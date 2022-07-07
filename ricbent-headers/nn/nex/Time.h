#pragma once

namespace nn { namespace nex { namespace Time {

GetTime();
Reset();
RegisterTimeProvider(nn::nex::TimeProvider*);
Multiply(float) const;
Divide(float) const;
Scale(float) const;
ConvertTimeoutToDeadline(unsigned int);
ConvertDeadlineToTimeout(nn::nex::Time);
FREQUENCY;
s_pfGetSessionTime;

} } } 
