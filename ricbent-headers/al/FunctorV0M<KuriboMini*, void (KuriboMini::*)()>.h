#pragma once

namespace al { namespace FunctorV0M<KuriboMini*, void (KuriboMini::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
