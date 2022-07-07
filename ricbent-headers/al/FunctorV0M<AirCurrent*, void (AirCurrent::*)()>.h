#pragma once

namespace al { namespace FunctorV0M<AirCurrent*, void (AirCurrent::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
