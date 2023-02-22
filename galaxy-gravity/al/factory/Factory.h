#pragma once

#include "al/actor/Factory.h"

namespace al {

template <typename T>
using NameToCreator = FactoryEntry<T>;

}
