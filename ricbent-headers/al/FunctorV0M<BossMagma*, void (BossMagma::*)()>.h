#pragma once

namespace al { namespace FunctorV0M<BossMagma*, void (BossMagma::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
