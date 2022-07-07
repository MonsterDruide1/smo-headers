#pragma once

namespace al { namespace FunctorV0M<BlowObj*, void (BlowObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
