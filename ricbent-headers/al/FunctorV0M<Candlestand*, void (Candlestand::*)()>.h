#pragma once

namespace al { namespace FunctorV0M<Candlestand*, void (Candlestand::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
