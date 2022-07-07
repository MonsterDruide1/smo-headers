#pragma once

class FooterParts
{
public:
    FooterParts(al::LayoutActor*, al::LayoutInitInfo const&, char16_t const*, char const*, char const*);
    changeText(char16_t const*);
    changeTextFade(char16_t const*);
    tryChangeTextFade(char16_t const*);
    exeWait();
    exeFadeOut();
    exeFadeIn();
};
