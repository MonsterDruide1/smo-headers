#pragma once

namespace al { namespace FunctorV0M<KoopaShip*, void (KoopaShip::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
