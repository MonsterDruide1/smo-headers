#pragma once

namespace nn { namespace font { namespace WordWrapping {

FindLineBreak(unsigned short const*, unsigned short const*, nn::font::WordWrapCallback&, nn::font::WordWrapConfig const&);
FindLineBreakUtf8(char const*, char const*, nn::font::WordWrapCallbackUtf8&, nn::font::WordWrapConfig const&);
CalculateWordWrapping(unsigned int*, unsigned short*, unsigned int, unsigned short const*, unsigned int, nn::font::WordWrapCallback&, nn::font::WordWrapConfig const&);
CalculateWordWrappingUtf8(unsigned int*, char*, unsigned int, char const*, unsigned int, nn::font::WordWrapCallbackUtf8&, nn::font::WordWrapConfig const&);

} } } 
