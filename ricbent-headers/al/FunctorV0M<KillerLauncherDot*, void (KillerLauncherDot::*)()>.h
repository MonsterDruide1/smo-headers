#pragma once

namespace al { namespace FunctorV0M<KillerLauncherDot*, void (KillerLauncherDot::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
