#pragma once

namespace al { namespace FunctorV0M<GunetterSpin*, void (GunetterSpin::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
