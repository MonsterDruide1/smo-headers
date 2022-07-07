#pragma once

namespace nn { namespace font { 

class TextureCache
{
public:
    TextureCache();
    ~TextureCache();
    SetMemoryPoolInfo(nn::gfx::MemoryPoolInfo*);
    CalculateMemoryPoolAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int);
    CalculateMemoryPoolSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int);
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::TextureCache::InitializeArg const&, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    InitializeFontFaceTable(nn::font::TextureCache::InitializeArg const&);
    AssertFsError(char const*) const;
    AssertFsErrorNoPlot(char const*, unsigned int) const;
    SetFontFace(unsigned int);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void (*)(void*, void*), void*);
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    RegisterGlyph(unsigned int, unsigned int, unsigned short, int);
    GetInnerFontFace(unsigned int*, unsigned int, unsigned int);
    EraseNotInFontGlyphs();
    RegisterGlyphsWithLength(unsigned short const*, unsigned int, unsigned int, unsigned short, int);
    RegisterGlyphsWithLengthUtf8(char const*, unsigned int, unsigned int, unsigned short, int);
    UpdateTextureCache();
    CreateNewLineImpl(unsigned char);
    FindAndReserveEraseGlyph(unsigned char, unsigned short);
    CompleteTextureCache();
    ClearLockAllGlyphs(int);
    ClearLockGlyphsWithLength(unsigned short const*, unsigned int, unsigned int, unsigned short, int);
    ClearLockGlyphsWithLengthUtf8(char const*, unsigned int, unsigned int, unsigned short, int);
    ResetTextureCache();
    IsBorderEffectEnabled(unsigned short) const;
    IsGlyphExistInFont(unsigned int, unsigned short);
    GetFontMetrics(unsigned short) const;
    CalculateCharWidth(unsigned int, unsigned int, unsigned short);
    GetCoreId() const;
    SetFontFaceNoPlot(unsigned int, unsigned int);
    CalculateKerning(unsigned int, unsigned int, unsigned int, unsigned short);
    FindGlyphNode(unsigned int, unsigned int, unsigned short);
    CountUnusableGlyph(unsigned short const*, unsigned int, unsigned int, unsigned short);
    CheckCharCodeRange(unsigned int, unsigned int) const;
};

} } 
