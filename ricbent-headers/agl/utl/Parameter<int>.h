#pragma once

namespace agl { namespace utl { namespace Parameter<int> {

~Parameter();
getParameterType() const;
ptr() const;
ptr();
typePtr() const;
typePtr();
size() const;
calcBinarizeSize() const;
clone(sead::Heap*, agl::utl::IParameterObj*) const;

} } } 
