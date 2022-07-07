#pragma once

namespace al { namespace FunctorV0M<TestMusaBlockGenerator*, void (TestMusaBlockGenerator::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
