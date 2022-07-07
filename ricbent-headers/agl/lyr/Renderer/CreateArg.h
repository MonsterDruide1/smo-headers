#pragma once

namespace agl { namespace lyr { namespace Renderer { 

class CreateArg
{
public:
    CreateArg();
    setDisplayInfo(int, sead::Vector2<int> const&, sead::Vector2<int> const&);
    ~CreateArg();
};

} } } 
