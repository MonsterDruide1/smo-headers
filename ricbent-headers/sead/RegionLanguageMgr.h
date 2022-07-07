#pragma once

namespace sead { 

class RegionLanguageMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    RegionLanguageMgr();
    ~RegionLanguageMgr();
    loadMask_(sead::RingBuffer<sead::RegionLanguageID>*, sead::RegionLanguageMgr::InitArg const&);
    parseRegionLanguageMaskStr_(sead::RingBuffer<sead::RegionLanguageID>*, sead::SafeStringBase<char> const&) const;
    setRegionLanguageWithCheckMask_(sead::RegionID, sead::LanguageID, sead::RingBuffer<sead::RegionLanguageID> const&);
    initialize(sead::RegionLanguageMgr::InitArg const&);
    initializeWithRegionLanguage(sead::RegionLanguageID, sead::Controller*);
    getRegion() const;
    getLanguage() const;
    setRegionLanguage(sead::RegionLanguageID);
    setRegionAndLanguage(sead::RegionID, sead::LanguageID);
    cRegionLanguageMaskStr_JPja;
    cRegionLanguageMaskStr_JPja_USen_USes_USfr_EUen_EUes_EUfr_EUde_EUit;
    cRegionLanguageMaskStr_JPja_USen_USes_USfr_USpt_EUen_EUes_EUfr_EUde_EUit_EUpt_EUnl_EUru;
    cRegionLanguageMaskStr_All;
    sInstance;
};

} 
