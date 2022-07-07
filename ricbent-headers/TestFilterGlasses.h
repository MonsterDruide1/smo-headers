#pragma once

class TestFilterGlasses
{
public:
    TestFilterGlasses(char const*, al::LayoutInitInfo const&, char const*);
    startAppear();
    end();
    exeAppear();
    exeWait();
    exeEnd();
    isEnd() const;
};
