#pragma once

namespace al { namespace FunctorV0M<ReactionObject*, void (ReactionObject::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
