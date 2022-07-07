#pragma once

namespace al { namespace FunctorV0M<al::BgmPlayObj*, void (al::BgmPlayObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
