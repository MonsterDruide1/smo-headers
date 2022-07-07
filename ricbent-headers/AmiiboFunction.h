#pragma once

namespace AmiiboFunction {

tryGetTriggerTouchNfpInfo(al::IUseSceneObjHolder const*);
getLastTriggerTouchNfpInfo(al::IUseSceneObjHolder const*);
startNfpTouch(al::IUseSceneObjHolder const*);
stopNfpTouch(al::IUseSceneObjHolder const*);
isNfpErrorHandled(al::IUseSceneObjHolder const*);
requestAppearAmiiboLayout(al::IUseSceneObjHolder const*);
requestDecideAmiiboLayout(al::IUseSceneObjHolder const*);
requestEndAmiiboLayout(al::IUseSceneObjHolder const*);
isEndAmiiboLayout(al::IUseSceneObjHolder const*);
getAmiiboTouchLayout(al::IUseSceneObjHolder const*);
getSearchAmiiboNum(al::IUseSceneObjHolder const*);
getSearchEndAmiiboNum(al::IUseSceneObjHolder const*);
getSearchEndAmiiboNumRealTime(al::IUseSceneObjHolder const*);
registerSearchAmiibo(al::IUseSceneObjHolder const*, al::NfpInfo const&);
isSearchAmiibo(al::IUseSceneObjHolder const*, al::NfpInfo const&);
deleteSearchEndAmiibo(al::IUseSceneObjHolder const*);
setTalkStartTime(al::IUseSceneObjHolder const*);
getMessageTagDataHolder(al::IUseSceneObjHolder const*);
setTouchAmiiboName(al::IUseSceneObjHolder const*, int, int);
trySetAmiiboCostumeName(al::IUseSceneObjHolder const*, int);
tryCreateHelpAmiiboDirector(al::IUseSceneObjHolder const*);
isTriggerTouchAmiiboMario(al::IUseSceneObjHolder const*);
isTriggerTouchAmiiboPeach(al::IUseSceneObjHolder const*);
isTriggerTouchAmiiboKoopa(al::IUseSceneObjHolder const*);
isTriggerTouchAmiiboAll(al::IUseSceneObjHolder const*);

} 
