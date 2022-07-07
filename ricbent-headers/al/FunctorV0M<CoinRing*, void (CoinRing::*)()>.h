#pragma once

namespace al { namespace FunctorV0M<CoinRing*, void (CoinRing::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
