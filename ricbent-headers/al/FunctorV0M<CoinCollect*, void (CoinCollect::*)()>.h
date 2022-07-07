#pragma once

namespace al { namespace FunctorV0M<CoinCollect*, void (CoinCollect::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
