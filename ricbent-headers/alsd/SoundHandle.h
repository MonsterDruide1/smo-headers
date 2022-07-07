#pragma once

namespace alsd { namespace SoundHandle {

stop(int);
pause(int);
unpause(int);
setVolume(float, int);
setPitch(float);
setPan(float);
isAttachedSound() const;
getSoundId() const;

} } 
