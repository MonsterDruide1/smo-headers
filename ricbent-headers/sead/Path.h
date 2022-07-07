#pragma once

namespace sead { namespace Path {

getDriveName(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getPathExceptDrive(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getExt(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getFileName(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getBaseFileName(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
getDirectoryName(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&);
join(sead::BufferedSafeStringBase<char>*, char const*, char const*);
changeDelimiter(sead::BufferedSafeStringBase<char>*, char);

} } 
