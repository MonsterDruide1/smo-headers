#pragma once

namespace alByamlLocalUtil {

getDataTypeString(int);
getHashKeyTable(unsigned char const*);
getStringTable(unsigned char const*);
getData64Bit(unsigned char const*, unsigned int, bool);
writeU24(sead::WriteStream*, int);
verifiByaml(unsigned char const*);
verifiByamlHeader(unsigned char const*);
verifiByamlStringTable(unsigned char const*, bool);

} 
