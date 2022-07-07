#pragma once

namespace alCameraPoserFactoryFunction {

initAndCreateTableFromOtherTable2(al::CameraPoserFactory*, al::NameToCreator<al::CameraPoser* (*)(char const*)> const*, int, al::NameToCreator<al::CameraPoser* (*)(char const*)> const*, int);
initAndCreateTableWithAnotherFactory(al::CameraPoserFactory*, al::CameraPoserFactory const*, al::NameToCreator<al::CameraPoser* (*)(char const*)> const*, int);
initAndCreateTableWithPresetPosers(al::CameraPoserFactory*, al::NameToCreator<al::CameraPoser* (*)(char const*)> const*, int);

} 
