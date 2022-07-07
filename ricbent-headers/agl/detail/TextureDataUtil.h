#pragma once

namespace agl { namespace detail { namespace TextureDataUtil {

convFormatDriverToAGL(NVNformat);
convFormatAGLToDriver(agl::TextureFormat);
convCompSelDriverToAGL(NVNtextureSwizzle);
convFormatNNGfxToAGL(nn::gfx::ImageFormat);

} } } 
