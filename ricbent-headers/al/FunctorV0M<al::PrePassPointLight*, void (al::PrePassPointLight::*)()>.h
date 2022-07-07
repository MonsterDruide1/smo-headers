#pragma once

namespace al { namespace FunctorV0M<al::PrePassPointLight*, void (al::PrePassPointLight::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
