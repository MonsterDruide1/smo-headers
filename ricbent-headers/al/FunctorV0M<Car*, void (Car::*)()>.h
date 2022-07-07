#pragma once

namespace al { namespace FunctorV0M<Car*, void (Car::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
