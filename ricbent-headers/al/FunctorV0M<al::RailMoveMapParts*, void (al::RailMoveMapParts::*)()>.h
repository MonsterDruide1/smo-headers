#pragma once

namespace al { namespace FunctorV0M<al::RailMoveMapParts*, void (al::RailMoveMapParts::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
