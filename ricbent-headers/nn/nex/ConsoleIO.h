#pragma once

namespace nn { namespace nex { namespace ConsoleIO {

InputIsSupported();
OutputIsSupported();
GetChar(bool);
GetCStr(char*, unsigned int);
Print(char const*, ...);
PutString(char const*);
Banner(char const*);
Error();

} } } 
