#pragma once

namespace al { namespace FunctorV0M<OceanWaveActor*, void (OceanWaveActor::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
