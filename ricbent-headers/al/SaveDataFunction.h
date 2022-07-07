#pragma once

namespace al { namespace SaveDataFunction {

getSaveDataHeader(unsigned char*);
getSaveDataHeader(unsigned char const*);
calcSaveDataCheckSum(unsigned char const*);
makeInvalidResult();

} } 
