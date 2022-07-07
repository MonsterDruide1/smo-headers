#pragma once

namespace agl { namespace utl { namespace Parameter<unsigned int*> {

typePtr() const;
typePtr();
calcBinarizeSize() const;
clone(sead::Heap*, agl::utl::IParameterObj*) const;
~Parameter();
getParameterType() const;
ptr() const;
ptr();
size() const;

} } } 
