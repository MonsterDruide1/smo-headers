#pragma once

namespace LifeUpItemFunction {

updateSurfaceFinder(al::WaterSurfaceFinder*, al::LiveActor const*, float);
updateSurfaceFinder(al::FireSurfaceFinder*, al::LiveActor const*, float);
updateVelocityInWaterAndFire(al::LiveActor*, al::WaterSurfaceFinder*, al::FireSurfaceFinder*, float, float);

} 
