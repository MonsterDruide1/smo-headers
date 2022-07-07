#pragma once

namespace al { namespace FunctorV0M<BossRaid*, void (BossRaid::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
