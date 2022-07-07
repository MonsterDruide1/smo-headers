#pragma once

namespace al { namespace FunctorV0M<Shine*, void (Shine::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
