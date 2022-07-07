#pragma once

namespace al { namespace IUsePartsGraphics {

endInit();
doCommandBufferCopy(al::GraphicsCopyInfo const*) const;
doComputeShader(al::GraphicsComputeInfo const*) const;
drawGBufferAfterSky(al::GraphicsRenderInfo const&) const;
drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
drawDeferred(al::GraphicsRenderInfo const&) const;
drawLdr(al::GraphicsRenderInfo const&) const;
drawIndirect(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
drawCubemap(al::GraphicsRenderInfo const&) const;
drawSystem(al::GraphicsRenderInfo const*) const;

} } 
