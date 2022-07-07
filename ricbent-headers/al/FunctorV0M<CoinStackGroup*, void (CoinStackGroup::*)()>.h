#pragma once

namespace al { namespace FunctorV0M<CoinStackGroup*, void (CoinStackGroup::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
