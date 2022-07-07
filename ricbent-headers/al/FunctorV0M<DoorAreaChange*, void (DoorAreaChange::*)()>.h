#pragma once

namespace al { namespace FunctorV0M<DoorAreaChange*, void (DoorAreaChange::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
