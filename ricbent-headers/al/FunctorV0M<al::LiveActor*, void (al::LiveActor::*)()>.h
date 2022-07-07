#pragma once

namespace al { namespace FunctorV0M<al::LiveActor*, void (al::LiveActor::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
