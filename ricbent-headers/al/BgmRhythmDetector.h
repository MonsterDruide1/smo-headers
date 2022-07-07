#pragma once

namespace al { 

class BgmRhythmDetector
{
public:
    BgmRhythmDetector();
    init(al::AudioInfoListWithParts<al::BgmRhythmInfo>*, al::AudioInfoListWithParts<al::BgmBpmInfo>*, al::AudioInfoListWithParts<al::BgmTimeSignatureInfo>*, float, al::BgmResourceSpecificInfo*, long, al::BgmSampleDataInfo const&);
    update(long);
    calcParams(long);
    setRhythmInfoList(al::AudioInfoListWithParts<al::BgmRhythmInfo>*, al::AudioInfoListWithParts<al::BgmBpmInfo>*, al::AudioInfoListWithParts<al::BgmTimeSignatureInfo>*, float);
    resetRhythmInfoList();
    forceUninitialized();
};

} 
