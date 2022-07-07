#pragma once

namespace nn { namespace atk { namespace detail { namespace CurveLfo {

InitializeCurveTable();
RegisterUserCurve(float (*)(float), unsigned int);
UnregisterUserCurve(unsigned int);
Reset();
Update(int);
GetValue() const;

} } } } 
