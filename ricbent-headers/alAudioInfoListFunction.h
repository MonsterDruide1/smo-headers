#pragma once

namespace alAudioInfoListFunction {

getCreateAudioInfoListSize(al::ByamlIter const&, int);
getCreateAudioInfoListSize(al::ByamlIter const&, al::ByamlIter const&);
createAudioInfoAndSetToList(al::AudioInfoListCreateFunctorBase*, al::ByamlIter const&);

} 
