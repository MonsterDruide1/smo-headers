#pragma once

namespace sead { namespace CoreInfo {

configure();
getPlatformMask(sead::CoreId);
dump();
sNumCores;
sPlatformCoreId;
sCoreIdFromPlatformCoreIdTable;
sCoreNumberTlsSlot;

} } 
