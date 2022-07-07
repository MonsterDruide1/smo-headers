#pragma once

namespace al { namespace FunctorV0M<PaintObj*, void (PaintObj::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
