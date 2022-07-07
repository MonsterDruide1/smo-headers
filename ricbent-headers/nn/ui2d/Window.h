#pragma once

namespace nn { namespace ui2d { 

class Window
{
public:
    Window(int, int);
    Initialize();
    InitializeTexCount(int, int*, int);
    Window(int, int, int, int, int);
    Window(int, int, int, int, int, int, int, int, int);
    Window(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::ResWindow const*, nn::ui2d::ResWindow const*, nn::ui2d::BuildArgSet const&);
    InitializeContent(int);
    InitializeSize(nn::ui2d::ResWindow const*);
    InitializeFrame(int);
    InitializeUseLeftTopMaterialEmulation(nn::ui2d::BuildResultInformation*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Window(nn::ui2d::Window const&, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    ~Window();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    GetVertexColor(int) const;
    SetVertexColor(int, nn::util::Unorm8x4 const&);
    GetVertexColorElement(int) const;
    SetVertexColorElement(int, unsigned char);
    GetMaterialCount() const;
    GetMaterial(int) const;
    FindMaterialByName(char const*, bool);
    FindMaterialByName(char const*, bool) const;
    SetFrameMaterial(nn::ui2d::WindowFrame, nn::ui2d::Material*);
    SetContentMaterial(nn::ui2d::Material*);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    CalculateAroundFrameWindow(nn::ui2d::DrawInfo&);
    CalculateHorizontalFrameWindow(nn::ui2d::DrawInfo&);
    CalculateHorizontalFrameNocontentWindow(nn::ui2d::DrawInfo&);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    CompareCopiedInstanceTest(nn::ui2d::Window const&) const;
    CalculateFrame(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const&, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateFrame4(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const*, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateFrame8(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const*, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateContent(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateHorizontalFrame(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const&, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateHorizontalFrame2(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const*, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateHorizontalNocontentFrame(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const&, nn::ui2d::WindowFrameSize const&, unsigned char);
    CalculateHorizontalNocontentFrame2(nn::ui2d::DrawInfo&, nn::util::Float2 const&, nn::ui2d::Window::Frame const*, nn::ui2d::WindowFrameSize const&, unsigned char);
    GetRuntimeTypeInfo() const;
};

} } 
