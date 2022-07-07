#pragma once

namespace al { namespace FunctorV0M<al::AreaObj*, void (al::AreaObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
