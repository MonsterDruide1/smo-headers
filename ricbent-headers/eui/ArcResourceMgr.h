#pragma once

namespace eui { 

class ArcResourceMgr
{
public:
    ArcResourceMgr();
    ~ArcResourceMgr();
    loadArchivesInDirectory(sead::Heap*, sead::SafeStringBase<char> const&);
    loadArchive(sead::Heap*, sead::SafeStringBase<char> const&);
    findArchiveData(sead::SafeStringBase<char> const&) const;
    findArcResource(sead::SafeStringBase<char> const&) const;
    unloadAllArchives();
    addArchiveToList(eui::ArcResourceMgr::ArcResource*);
    eraseArchiveFromList(eui::ArcResourceMgr::ArcResource*);
    finalizeInitializedShaderResource(void*);
};

} 
