#pragma once

namespace nn { namespace ui2d { 

class TextSearcher
{
public:
    ~TextSearcher();
    SearchTextUtf8(nn::ui2d::TextSearcher::TextInfoUtf8*, char const*, nn::ui2d::Layout*, nn::ui2d::TextBox*, nn::ui2d::Layout*);
};

} } 
