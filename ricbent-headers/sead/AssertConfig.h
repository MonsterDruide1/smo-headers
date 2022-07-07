#pragma once

namespace sead { namespace AssertConfig {

registerCallback(sead::DelegateEvent<char const*>::Slot&);
unregisterCallback(sead::DelegateEvent<char const*>::Slot&);
registerFinalCallback(sead::IDelegate1<char const*>*);
execCallbacks(char const*);
sAssertEvent;
sFinalCallback;

} } 
