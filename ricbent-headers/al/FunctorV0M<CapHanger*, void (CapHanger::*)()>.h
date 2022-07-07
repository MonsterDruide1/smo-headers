#pragma once

namespace al { namespace FunctorV0M<CapHanger*, void (CapHanger::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
