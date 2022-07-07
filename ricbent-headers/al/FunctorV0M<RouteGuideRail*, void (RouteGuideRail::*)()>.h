#pragma once

namespace al { namespace FunctorV0M<RouteGuideRail*, void (RouteGuideRail::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
