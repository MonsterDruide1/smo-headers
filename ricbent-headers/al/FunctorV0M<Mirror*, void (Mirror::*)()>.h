#pragma once

namespace al { namespace FunctorV0M<Mirror*, void (Mirror::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
