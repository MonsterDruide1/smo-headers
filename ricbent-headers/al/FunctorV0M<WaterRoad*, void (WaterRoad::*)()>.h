#pragma once

namespace al { namespace FunctorV0M<WaterRoad*, void (WaterRoad::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
