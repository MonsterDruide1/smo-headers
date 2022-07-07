#pragma once

namespace al { namespace FunctorV0M<NeedleTrap*, void (NeedleTrap::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
