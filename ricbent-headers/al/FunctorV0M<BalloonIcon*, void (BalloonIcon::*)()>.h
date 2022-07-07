#pragma once

namespace al { namespace FunctorV0M<BalloonIcon*, void (BalloonIcon::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
