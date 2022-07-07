#pragma once

namespace al { namespace FunctorV0M<BlockQuestion*, void (BlockQuestion::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
