#pragma once

namespace sead { namespace PerfJobQueue {

initialize(char const*, sead::Heap*);
finalize();
reset();
measureBeginDeque();
measureEndDeque();
measureBeginRun();
measureEndRun();
getBarColor(unsigned int) const;
attachProcessMeter();
detachProcessMeter();

} } 
