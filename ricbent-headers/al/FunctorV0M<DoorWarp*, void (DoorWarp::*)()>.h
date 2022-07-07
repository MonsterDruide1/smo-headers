#pragma once

namespace al { namespace FunctorV0M<DoorWarp*, void (DoorWarp::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
