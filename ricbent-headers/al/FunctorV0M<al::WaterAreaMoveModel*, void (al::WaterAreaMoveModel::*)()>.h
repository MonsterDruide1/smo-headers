#pragma once

namespace al { namespace FunctorV0M<al::WaterAreaMoveModel*, void (al::WaterAreaMoveModel::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
