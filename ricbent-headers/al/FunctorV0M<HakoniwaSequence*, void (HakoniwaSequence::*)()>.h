#pragma once

namespace al { namespace FunctorV0M<HakoniwaSequence*, void (HakoniwaSequence::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
