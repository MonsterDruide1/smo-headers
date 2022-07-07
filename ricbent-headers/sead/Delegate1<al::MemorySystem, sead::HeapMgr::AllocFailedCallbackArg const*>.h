#pragma once

namespace sead { namespace Delegate1<al::MemorySystem, sead::HeapMgr::AllocFailedCallbackArg const*> {

invoke(sead::HeapMgr::AllocFailedCallbackArg const*);
clone(sead::Heap*) const;

} } 
