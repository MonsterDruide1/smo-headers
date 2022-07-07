#pragma once

namespace al { 

class HtmlViewer
{
public:
    HtmlViewer();
    call(char const*, sead::BufferedSafeStringBase<char>*) const;
};

} 
