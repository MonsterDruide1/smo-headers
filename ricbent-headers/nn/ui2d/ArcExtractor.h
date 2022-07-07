#pragma once

namespace nn { namespace ui2d { 

class ArcExtractor
{
public:
    ArcExtractor(void const*);
    PrepareArchive(void const*);
    ArcExtractor();
    ~ArcExtractor();
    Relocate(void const*);
    Unrelocate(void const*);
    GetFileCount() const;
    GetFileFast(nn::ui2d::ArcFileInfo*, int);
    ConvertPathToEntryId(char const*) const;
    ReadEntry(int*, nn::ui2d::ArcEntry*, int) const;
};

} } 
