#pragma once

namespace al { namespace FunctorV0M<Stake*, void (Stake::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
