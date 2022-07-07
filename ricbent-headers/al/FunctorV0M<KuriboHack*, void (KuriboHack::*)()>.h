#pragma once

namespace al { namespace FunctorV0M<KuriboHack*, void (KuriboHack::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
