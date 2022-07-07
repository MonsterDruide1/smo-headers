#pragma once

namespace al { namespace FunctorV0M<CityBuilding*, void (CityBuilding::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
