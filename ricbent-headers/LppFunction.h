#pragma once

namespace LppFunction {

declareLpp<al::LppPointParam>(al::LppPointParam const&, al::PrePassLightBase const&, int);
declareLpp<al::LppLineParam>(al::LppLineParam const&, al::PrePassLightBase const&, int);
declareLpp<al::LppSpotParam>(al::LppSpotParam const&, al::PrePassLightBase const&, int);
declareLpp<al::LppProjParam>(al::LppProjParam const&, al::PrePassLightBase const&, int);
declareLpp<al::LppProjOrthoParam>(al::LppProjOrthoParam const&, al::PrePassLightBase const&, int);
declareLpp<al::LppCausticsParam>(al::LppCausticsParam const&, al::PrePassLightBase const&, int);
requestLpp<al::LppPointParam>(al::LppPointParam*, al::PrePassLightBase*);
requestLppPoint(al::LppPointParam*, al::PrePassLightBase*, sead::Vector3<float> const&);
requestLpp<al::LppLineParam>(al::LppLineParam*, al::PrePassLightBase*);
requestLpp<al::LppSpotParam>(al::LppSpotParam*, al::PrePassLightBase*);
requestLpp<al::LppProjParam>(al::LppProjParam*, al::PrePassLightBase*);
requestLpp<al::LppProjOrthoParam>(al::LppProjOrthoParam*, al::PrePassLightBase*);
requestLpp<al::LppCausticsParam>(al::LppCausticsParam*, al::PrePassLightBase*);
calcClippingInfoLpp<al::LppPointParam>(al::LppPointParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
calcClippingInfoLpp<al::LppLineParam>(al::LppLineParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
calcClippingInfoLpp<al::LppSpotParam>(al::LppSpotParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
calcClippingInfoLpp<al::LppProjParam>(al::LppProjParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
calcClippingInfoLpp<al::LppProjOrthoParam>(al::LppProjOrthoParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
calcClippingInfoLpp<al::LppCausticsParam>(al::LppCausticsParam*, al::PrePassLightBase*, sead::Vector3<float>*, float*);
trySetupShadowLpp<al::LppPointParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppPointParam*, int);
trySetupShadowLpp<al::LppLineParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppLineParam*, int);
trySetupShadowLpp<al::LppSpotParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppSpotParam*, int);
trySetupShadowLpp<al::LppProjParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppProjParam*, int);
trySetupShadowLpp<al::LppProjOrthoParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppProjOrthoParam*, int);
trySetupShadowLpp<al::LppCausticsParam>(agl::lght::LightPrePass*, al::ShadowDirector*, al::LppCausticsParam*, int);

} 
