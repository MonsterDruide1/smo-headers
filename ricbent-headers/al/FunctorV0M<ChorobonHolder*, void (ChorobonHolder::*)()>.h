#pragma once

namespace al { namespace FunctorV0M<ChorobonHolder*, void (ChorobonHolder::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
