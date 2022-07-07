#pragma once

namespace al { namespace BgmEventController<al::IUseAudioKeeper, al::BgmDemoProcInfo> {

update(float, float, float, bool);
endEvent(al::AudioInfoListWithParts<al::BgmDemoProcInfo>*, bool);
tryStartEvent(al::BgmDemoProcInfo const*);

} } 
