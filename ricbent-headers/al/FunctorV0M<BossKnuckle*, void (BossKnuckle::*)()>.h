#pragma once

namespace al { namespace FunctorV0M<BossKnuckle*, void (BossKnuckle::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
