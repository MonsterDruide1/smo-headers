#pragma once

namespace al { namespace FunctorV0M<KillerLauncher*, void (KillerLauncher::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
