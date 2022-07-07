#pragma once

namespace nn { namespace font { 

class GlyphTreeMap
{
public:
    GlyphTreeMap();
    Initialize(void* (*)(unsigned long, unsigned long, void*), void*, unsigned int);
    Finalize(void (*)(void*, void*), void*);
    Find(unsigned int, unsigned short, unsigned short) const;
    Find(nn::font::GlyphNode*, unsigned long) const;
    Insert(unsigned int, unsigned short, unsigned short);
    Insert(nn::font::GlyphNode*, nn::font::GlyphNode*);
    Erase(unsigned int, unsigned short, unsigned short);
    Erase(nn::font::GlyphNode*, unsigned long);
    EraseMin(nn::font::GlyphNode*);
    Dump() const;
    Reset();
    UpdateFlagsForCompleteTextureCacheRecursive(nn::font::GlyphNode*);
    ClearLockGroupRecursive(nn::font::GlyphNode*, unsigned int);
    DumpRecursive(nn::font::GlyphNode*, unsigned int);
};

} } 
