#pragma once

namespace al { 

class BgmTimeSignatureInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmTimeSignatureInfo const*, al::BgmTimeSignatureInfo const*);
    BgmTimeSignatureInfo();
    BgmTimeSignatureInfo(al::BgmTimeSignatureInfo const&);
};

} 
