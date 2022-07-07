#pragma once

namespace al { namespace FunctorV0M<BubbleLauncher*, void (BubbleLauncher::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
