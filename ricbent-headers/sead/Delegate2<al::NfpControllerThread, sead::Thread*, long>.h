#pragma once

namespace sead { namespace Delegate2<al::NfpControllerThread, sead::Thread*, long> {

invoke(sead::Thread*, long);
clone(sead::Heap*) const;

} } 
