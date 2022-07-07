#pragma once

namespace DemoSceneFunction {

updateKitWithDemoActorHolder(al::Scene*, al::DemoActorHolder*, char const*, char const*, char const*, sead::Vector3<float> const*);
updateKitWithDemoActorHolderSequence(al::Scene*, al::DemoActorHolder*, char const*, char const*, char const*, sead::Vector3<float> const*);
updateKitWithDemoActorHolderSequenceDemoChangeWorldScene(al::Scene*, al::DemoActorHolder*, char const*, char const*, char const*, sead::Vector3<float> const*);
tryStartDemoEndFade(al::WipeHolder*, char const*, DemoSceneStateSkipDemo*, al::DemoActorHolder const*);

} 
