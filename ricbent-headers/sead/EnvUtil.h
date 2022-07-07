#pragma once

namespace sead { namespace EnvUtil {

getRegionLanguageFromString(sead::RegionLanguageID*, sead::SafeStringBase<char> const&);
convertToRegionLanguage(sead::RegionLanguageID*, sead::RegionID, sead::LanguageID);
convertToRegionAndLanguage(sead::RegionID*, sead::LanguageID*, sead::RegionLanguageID);
getPlatform();
getBuildPlatform();
getTarget();
getRegion();
getLanguage();
getRegionLanguage();
getRomType();
getRegionFromString(sead::RegionID*, sead::SafeStringBase<char> const&);
getLanguageFromString(sead::LanguageID*, sead::SafeStringBase<char> const&);
printCurrentTime();
getEnvironmentVariable(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getComputerName(sead::BufferedSafeStringBase<char>*);
convertToWinPath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
resolveEnvronmentVariable(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getFullPath(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);

} } 
