#pragma once

namespace nn { namespace ui2d { namespace detail { namespace TexCoordArray {

Initialize();
Free();
Reserve(int);
SetSize(int);
GetCoord(nn::util::Float2*, int) const;
SetCoord(int, nn::util::Float2 const*);
Copy(void const*, int);
CompareCopiedInstanceTest(nn::ui2d::detail::TexCoordArray const&) const;

} } } } 
