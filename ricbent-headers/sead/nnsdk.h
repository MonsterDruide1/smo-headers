#pragma once

namespace sead { namespace nnsdk {

PrintExceptionType(nn::os::UserExceptionInfo*);
PrintThreadInformation(nn::os::UserExceptionInfo*, unsigned long*, unsigned long*);
PrintGeneralPurposeRegisters(nn::os::UserExceptionInfo*);
PrintSpecialRegisters(nn::os::UserExceptionInfo*);
PrintFloatingPointRegisters(nn::os::UserExceptionInfo*);
PrintAddressAndSymbol(unsigned long);
PrintStackTrace(nn::os::UserExceptionInfo*);
PrintStackDump(nn::os::UserExceptionInfo*, unsigned long, unsigned long);
PrintModuleList();
PrintUserExceptionInfo(nn::os::UserExceptionInfo*);

} } 
