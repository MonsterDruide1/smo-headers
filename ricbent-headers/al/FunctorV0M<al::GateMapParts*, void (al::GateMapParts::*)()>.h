#pragma once

namespace al { namespace FunctorV0M<al::GateMapParts*, void (al::GateMapParts::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
