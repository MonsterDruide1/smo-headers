#pragma once

namespace sead { namespace PrintConfig {

registerCallback(sead::DelegateEvent<sead::PrintConfig::PrintEventArg const&>::Slot&);
unregisterCallback(sead::DelegateEvent<sead::PrintConfig::PrintEventArg const&>::Slot&);
registerFinalCallback(sead::IDelegate1<sead::PrintConfig::PrintEventArg const&>*);
execCallbacks(sead::PrintConfig::PrintEventArg const&);
sIsPrintEventUsed;
sPrintEvent;
sFinalCallback;

} } 
