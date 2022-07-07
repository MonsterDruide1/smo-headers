#pragma once

namespace al { namespace FunctorV0M<RouteGuideArrow*, void (RouteGuideArrow::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
