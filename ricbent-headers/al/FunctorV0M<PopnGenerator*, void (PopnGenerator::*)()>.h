#pragma once

namespace al { namespace FunctorV0M<PopnGenerator*, void (PopnGenerator::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
