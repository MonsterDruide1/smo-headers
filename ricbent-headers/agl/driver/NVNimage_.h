#pragma once

namespace agl { namespace driver { 

class NVNimage_
{
public:
    NVNimage_();
    ~NVNimage_();
    NVNimage_(agl::driver::NVNimage_ const&);
    operator=(agl::driver::NVNimage_ const&);
    updateImageId(int);
};

} } 
