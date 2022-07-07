#pragma once

namespace al { namespace FunctorV0M<al::ClockMapParts*, void (al::ClockMapParts::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
