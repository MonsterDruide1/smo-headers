#pragma once

namespace sead { namespace system {

NewImpl(sead::Heap*, unsigned long, int, bool);
DeleteImpl(void*);
Halt();
HaltWithDetail(char const*, int, char const*, ...);
DebugBreak();
Print(char const*, ...);
PrintV(char const*, std::__va_list);
PrintString(char const*, int);
PrintStringImpl(char const*, int);

} } 
