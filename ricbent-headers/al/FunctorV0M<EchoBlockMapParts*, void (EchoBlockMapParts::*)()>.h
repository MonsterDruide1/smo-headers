#pragma once

namespace al { namespace FunctorV0M<EchoBlockMapParts*, void (EchoBlockMapParts::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
