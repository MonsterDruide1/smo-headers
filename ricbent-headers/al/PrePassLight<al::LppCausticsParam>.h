#pragma once

namespace al { namespace PrePassLight<al::LppCausticsParam> {

init(al::ActorInitInfo const&);
execute();
declareLpp();
calcClippingInfo(sead::Vector3<float>*, float*);
trySetupShadow(int, agl::lght::LightPrePass*, al::ShadowDirector*);
getLightType() const;
~PrePassLight();

} } 
