#pragma once

namespace al { namespace FunctorV0M<MummyGenerator*, void (MummyGenerator::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
