#pragma once

namespace al { namespace FunctorV0M<al::NetworkSystem*, void (al::NetworkSystem::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
