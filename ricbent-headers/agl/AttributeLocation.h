#pragma once

namespace agl { 

class AttributeLocation
{
public:
    AttributeLocation(sead::SafeStringBase<char> const&, int);
    search(agl::ShaderProgram const&);
};

} 
