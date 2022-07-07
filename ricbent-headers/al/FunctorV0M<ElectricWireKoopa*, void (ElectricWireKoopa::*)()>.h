#pragma once

namespace al { namespace FunctorV0M<ElectricWireKoopa*, void (ElectricWireKoopa::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
