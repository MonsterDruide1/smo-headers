#pragma once

namespace al { namespace FunctorV0M<E3ResourceLoader*, void (E3ResourceLoader::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
