#pragma once

namespace nn { namespace nex { namespace ExceptionHandler {

CheckCrtExceptions();
Initialize();
HandleException();
ExceptionFilter(char const*, void*, bool);
s_bTrapExceptions;
s_bTrapBreakpoints;
s_bExitOnExceptions;
s_bExceptionWasThrown;

} } } 
