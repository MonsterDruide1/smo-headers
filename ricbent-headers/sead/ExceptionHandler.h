#pragma once

namespace sead { namespace ExceptionHandler {

initialize();
registerCallback(sead::DelegateEvent<sead::ExceptionHandler::Information const&>::Slot&);
unregisterCallback(sead::DelegateEvent<sead::ExceptionHandler::Information const&>::Slot&);
dumpAbortInfo_(nn::diag::AbortInfo const&);
getAbortReasonText_(nn::diag::AbortReason const&);
dumpAssertionInfo_(nn::diag::AssertionInfo const&);
getAssertionTypeText_(nn::diag::AssertionType const&);
makeLogMessage_(sead::BufferedSafeStringBase<char>*, nn::diag::LogMessage const*);
sEvent;

} } 
