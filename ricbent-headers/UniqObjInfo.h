#pragma once

namespace UniqObjInfo {

set(char const*, char const*);
set(sead::BufferedSafeStringBase<char> const&, sead::BufferedSafeStringBase<char> const&);
set(char const*, al::PlacementInfo const*);
clear();
isEmpty() const;
isEqual(char const*, char const*) const;
isEqual(sead::BufferedSafeStringBase<char> const&, sead::BufferedSafeStringBase<char> const&) const;
isEqual(UniqObjInfo const&) const;
print() const;
fillDummyData();

} 
