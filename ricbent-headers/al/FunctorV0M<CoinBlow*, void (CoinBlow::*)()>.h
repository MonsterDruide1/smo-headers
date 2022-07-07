#pragma once

namespace al { namespace FunctorV0M<CoinBlow*, void (CoinBlow::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
