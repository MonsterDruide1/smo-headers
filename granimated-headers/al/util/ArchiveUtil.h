#pragma once

#include "sead/prim/seadSafeString.h"
#include "sead/resource/seadResource.h"
#include "sead/filedevice/seadArchiveFileDevice.h"

namespace al
{
    sead::ArchiveRes* loadArchive(const sead::SafeStringBase<char> &);
};
