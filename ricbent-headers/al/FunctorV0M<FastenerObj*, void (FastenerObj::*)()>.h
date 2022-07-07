#pragma once

namespace al { namespace FunctorV0M<FastenerObj*, void (FastenerObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
