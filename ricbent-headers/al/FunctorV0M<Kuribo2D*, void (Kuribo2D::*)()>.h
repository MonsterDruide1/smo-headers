#pragma once

namespace al { namespace FunctorV0M<Kuribo2D*, void (Kuribo2D::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
