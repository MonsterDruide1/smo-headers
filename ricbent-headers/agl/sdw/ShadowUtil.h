#pragma once

namespace agl { namespace sdw { namespace ShadowUtil {

calcViewDir(sead::Vector3<float>*, sead::Matrix34<float>);
calcViewPos(sead::Vector3<float>*, sead::Matrix34<float>);
calcViewMatrix(sead::Matrix34<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
calcNearFar(float*, float*, sead::Matrix44<float> const&);
drawFrustum(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Color4f const&);

} } } 
