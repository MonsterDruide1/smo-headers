#pragma once

namespace al { namespace FunctorV0M<al::FogRequester*, void (al::FogRequester::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
