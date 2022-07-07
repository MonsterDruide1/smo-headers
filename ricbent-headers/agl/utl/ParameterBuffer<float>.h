#pragma once

namespace agl { namespace utl { namespace ParameterBuffer<float> {

~ParameterBuffer();
getParameterType() const;
ptr() const;
ptr();
size() const;
postApplyResource_(void const*, unsigned long);
isBinary() const;
isBinaryInternalBuffer() const;

} } } 
