#pragma once

namespace al { namespace FunctorV0M<al::PrePassLineLight*, void (al::PrePassLineLight::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
