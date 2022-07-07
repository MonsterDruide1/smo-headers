#pragma once

namespace al { namespace FunctorV0M<RailCollision*, void (RailCollision::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
