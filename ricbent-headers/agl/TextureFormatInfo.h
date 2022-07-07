#pragma once

namespace agl { namespace TextureFormatInfo {

getPixelByteSize(agl::TextureFormat);
getComponentNum(agl::TextureFormat);
getComponentBitSize(agl::TextureFormat, int);
getComponentOrder(agl::TextureFormat, int);
isCompressed(agl::TextureFormat);
isRenderTargetCompressAvailable(agl::TextureFormat);
isNormalized(agl::TextureFormat);
isFloat(agl::TextureFormat);
isUnsigned(agl::TextureFormat);
isSRGB(agl::TextureFormat);
getString(agl::TextureFormat);
isUsableAsRenderTargetColor(agl::TextureFormat);
isUsableAsRenderTargetDepth(agl::TextureFormat);
isUsableAsRenderTargetDepthStencil(agl::TextureFormat);
getDefaultCompSel(agl::TextureFormat, int);
convFormatDriverToAGL(NVNformat);
convFormatAGLToDriver(agl::TextureFormat);

} } 
