#pragma once

namespace al { namespace FunctorV0M<ShineTowerRocket*, void (ShineTowerRocket::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
