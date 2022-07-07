#pragma once

namespace eui { namespace ArcResourceMgr { 

class ArcResource
{
public:
    ArcResource(eui::ArcResourceMgr*, sead::SafeStringBase<char> const&, void*);
    ~ArcResource();
};

} } 
