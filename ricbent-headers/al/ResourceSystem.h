#pragma once

namespace al { 

class ResourceSystem
{
public:
    ResourceSystem(char const*);
    addCategory(sead::SafeStringBase<char> const&, int, sead::Heap*);
    findOrCreateResourceCategory(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, char const*);
    findResourceCategoryIter(sead::SafeStringBase<char> const&);
    isEmptyCategoryResource(sead::SafeStringBase<char> const&);
    createCategoryResourceAll(sead::SafeStringBase<char> const&);
    createResource(sead::SafeStringBase<char> const&, al::ResourceSystem::ResourceCategory*, char const*);
    removeCategory(sead::SafeStringBase<char> const&);
    findResource(sead::SafeStringBase<char> const&);
    findResourceCore(sead::SafeStringBase<char> const&, sead::RingBuffer<al::ResourceSystem::ResourceCategory*>::iterator*);
    findOrCreateResource(sead::SafeStringBase<char> const&, char const*);
    findResourceCategory(sead::SafeStringBase<char> const&);
    loadCategoryArchiveAll(sead::SafeStringBase<char> const&);
    setCurrentCategory(char const*);
    findCategoryNameFromTable(sead::SafeStringBase<char> const&) const;
    tryGetTableCategoryIter(al::ByamlIter*, sead::SafeStringBase<char> const&) const;
    tryGetGraphicsInfoIter(al::ByamlIter*, sead::SafeStringBase<char> const&) const;
};

} 
