#pragma once

class AmiiboNpcDirector
{
public:
    AmiiboNpcDirector();
    init(ProjectNfpDirector*, al::AudioDirector*);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    updateSearchAmiiboName();
    requestAppearAmiiboLayout();
    requestDecideAmiiboLayout();
    requestEndAmiiboLayout();
    isEndAmiiboLayout();
    registerSearchAmiibo(int, int, unsigned long);
    deleteSearchEndAmiibo();
    isSearchAmiibo(int);
    getSearchAmiiboNum() const;
    getSearchEndAmiiboNum() const;
    getSearchEndAmiiboNumRealTime() const;
    isEnableSearchAmiibo();
    setTouchAmiiboName(int, int);
    trySetAmiiboCostumeName(int);
    checkTimeReverseAndRestore();
    tryGetTriggerTouchNfpInfo();
    getSceneObjName() const;
    ~AmiiboNpcDirector();
    getAudioKeeper() const;
};
