#pragma once

namespace al { namespace FunctorV0M<al::SePlayObj*, void (al::SePlayObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
