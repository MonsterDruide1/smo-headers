#pragma once

namespace al { namespace FunctorV0M<StageEventDemo*, void (StageEventDemo::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
