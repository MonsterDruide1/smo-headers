#pragma once

namespace al { namespace FunctorV0M<Fastener*, void (Fastener::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
