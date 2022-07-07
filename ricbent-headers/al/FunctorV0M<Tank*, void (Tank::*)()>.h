#pragma once

namespace al { namespace FunctorV0M<Tank*, void (Tank::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
