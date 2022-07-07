#pragma once

namespace sead { namespace Delegate2<al::InitializeThread, sead::Thread*, long> {

invoke(sead::Thread*, long);
clone(sead::Heap*) const;

} } 
