#pragma once

namespace alYamlMacroUtil { namespace YamlParamGroup {

setParamPtr<float>(char const*, float*);
setParamPtr<bool>(char const*, bool*);
setParamPtr<sead::Vector3<float> >(char const*, sead::Vector3<float>*);
setParamPtr<char const*>(char const*, char const**);
setParamPtr<sead::Vector2<float> >(char const*, sead::Vector2<float>*);
setParamPtr<sead::Color4f>(char const*, sead::Color4f*);
setParamPtr<unsigned char>(char const*, unsigned char*);
addParam(alYamlMacroUtil::IUseYamlParam*);
readyToSetPtr();
readParam(al::ByamlIter const&);
sCurrent;

} } 
