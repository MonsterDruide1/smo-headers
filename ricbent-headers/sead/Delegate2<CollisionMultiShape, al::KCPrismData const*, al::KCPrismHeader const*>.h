#pragma once

namespace sead { namespace Delegate2<CollisionMultiShape, al::KCPrismData const*, al::KCPrismHeader const*> {

invoke(al::KCPrismData const*, al::KCPrismHeader const*);
clone(sead::Heap*) const;

} } 
