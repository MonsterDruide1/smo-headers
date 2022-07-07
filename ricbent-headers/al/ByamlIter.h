#pragma once

namespace al { 

class ByamlIter
{
public:
    ByamlIter();
    ByamlIter(unsigned char const*);
    ByamlIter(unsigned char const*, unsigned char const*);
    isValid() const;
    isTypeHash() const;
    isTypeArray() const;
    isTypeContainer() const;
    isExistKey(char const*) const;
    getKeyIndex(char const*) const;
    isInvertOrder() const;
    getSize() const;
    getIterByIndex(int) const;
    getByamlDataByIndex(al::ByamlData*, int) const;
    getIterByKey(char const*) const;
    getByamlDataByKey(al::ByamlData*, char const*) const;
    getByamlDataByKeyIndex(al::ByamlData*, int) const;
    getByamlDataAndKeyName(al::ByamlData*, char const**, int) const;
    getKeyName(char const**, int) const;
    tryGetIterByIndex(al::ByamlIter*, int) const;
    tryGetIterAndKeyNameByIndex(al::ByamlIter*, char const**, int) const;
    tryGetIterByKey(al::ByamlIter*, char const*) const;
    tryGetStringByKey(char const**, char const*) const;
    tryConvertString(char const**, al::ByamlData const*) const;
    tryGetBinaryByKey(unsigned char const**, int*, char const*) const;
    tryConvertBinary(unsigned char const**, int*, al::ByamlData const*) const;
    tryGetBoolByKey(bool*, char const*) const;
    tryConvertBool(bool*, al::ByamlData const*) const;
    tryGetIntByKey(int*, char const*) const;
    tryConvertInt(int*, al::ByamlData const*) const;
    tryGetUIntByKey(unsigned int*, char const*) const;
    tryConvertUInt(unsigned int*, al::ByamlData const*) const;
    tryGetFloatByKey(float*, char const*) const;
    tryConvertFloat(float*, al::ByamlData const*) const;
    tryGetInt64ByKey(long*, char const*) const;
    tryConvertInt64(long*, al::ByamlData const*) const;
    tryGetUInt64ByKey(unsigned long*, char const*) const;
    tryConvertUInt64(unsigned long*, al::ByamlData const*) const;
    tryGetDoubleByKey(double*, char const*) const;
    tryConvertDouble(double*, al::ByamlData const*) const;
    tryGetStringByIndex(char const**, int) const;
    tryGetBinaryByIndex(unsigned char const**, int*, int) const;
    tryGetBoolByIndex(bool*, int) const;
    tryGetIntByIndex(int*, int) const;
    tryGetUIntByIndex(unsigned int*, int) const;
    tryGetFloatByIndex(float*, int) const;
    tryGetInt64ByIndex(long*, int) const;
    tryGetUInt64ByIndex(unsigned long*, int) const;
    tryGetDoubleByIndex(double*, int) const;
    tryConvertIter(al::ByamlIter*, al::ByamlData const*) const;
    isEqualData(al::ByamlIter const&) const;
};

} 
