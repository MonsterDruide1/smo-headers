#pragma once

namespace al { namespace FunctorV0M<Pen*, void (Pen::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
