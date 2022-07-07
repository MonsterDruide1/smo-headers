#pragma once

class TextInputLayout
{
public:
    TextInputLayout(char const*, al::LayoutInitInfo const&);
    end();
    startInput(char const*);
    getInputText(sead::BufferedSafeStringBase<char>*) const;
    exeAppear();
    exeWait();
    exeInput();
    exeEnd();
};
