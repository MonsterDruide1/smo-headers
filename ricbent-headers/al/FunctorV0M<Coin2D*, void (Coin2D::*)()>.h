#pragma once

namespace al { namespace FunctorV0M<Coin2D*, void (Coin2D::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
