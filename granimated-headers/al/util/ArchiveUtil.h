#pragma once

#include "prim/seadSafeString.h"
#include "resource/seadResource.h"
#include "filedevice/seadArchiveFileDevice.h"

namespace al
{
    sead::ArchiveRes* loadArchive(const sead::SafeStringBase<char> &);
};
