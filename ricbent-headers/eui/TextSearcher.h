#pragma once

namespace eui { 

class TextSearcher
{
public:
    TextSearcher(eui::MessageSet const*, eui::TagProcessor*);
    SearchText(nn::ui2d::TextSearcher::TextInfo*, char const*, nn::ui2d::Layout*, nn::ui2d::TextBox*, nn::ui2d::Layout*);
    ~TextSearcher();
};

} 
