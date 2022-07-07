#pragma once

namespace al { namespace FunctorV0M<al::AtmosScatterRequester*, void (al::AtmosScatterRequester::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
