#pragma once

namespace CapMessageDirectorFunction {

registerCapMessagePlacement(CapMessagePlacement*);
tryShowCapMessageSystem(al::IUseSceneObjHolder const*, CapMessageShowInfo const*, CapMessageGameDataChecker const*);
tryShowCapMessageSystemLow(al::IUseSceneObjHolder const*, CapMessageShowInfo const*, CapMessageGameDataChecker const*);
tryShowCapMessageSystemContinue(al::IUseSceneObjHolder const*, CapMessageShowInfo const*, CapMessageGameDataChecker const*);
endCapMessageSystemContinue(al::IUseSceneObjHolder const*);
invalidateAppearCapMessageNew(al::IUseSceneObjHolder const*);
validateAppearCapMessageNew(al::IUseSceneObjHolder const*);
forceEndCapMessage(al::IUseSceneObjHolder const*);
tryCancelCapMessageNew(al::IUseSceneObjHolder const*, char const*);
isShowCapMessage(al::IUseSceneObjHolder const*, char const*);
isDelayCapMessage(al::IUseSceneObjHolder const*, char const*);
isActiveCapMessage(al::IUseSceneObjHolder const*, char const*);
getCapMessageKeeper(al::IUseSceneObjHolder const*);

} 
