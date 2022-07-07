#pragma once

namespace al { namespace FunctorV0M<FireBlower*, void (FireBlower::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
