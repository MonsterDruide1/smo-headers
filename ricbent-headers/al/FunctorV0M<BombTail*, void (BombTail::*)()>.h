#pragma once

namespace al { namespace FunctorV0M<BombTail*, void (BombTail::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
