#pragma once

namespace al { namespace FunctorV0M<al::ConveyerMapParts*, void (al::ConveyerMapParts::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
