#pragma once

namespace al { namespace FunctorV0M<al::PrePassSpotLight*, void (al::PrePassSpotLight::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
