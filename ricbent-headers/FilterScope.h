#pragma once

class FilterScope
{
public:
    FilterScope(char const*, al::LayoutInitInfo const&, char const*);
    startAppear();
    end();
    exeAppear();
    exeWait();
    exeEnd();
    isEnd() const;
};
