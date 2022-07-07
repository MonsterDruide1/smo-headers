#pragma once

namespace nn { namespace g3d { namespace ResVertexShapeAnim {

Evaluate(float*, float, signed char const*) const;
Evaluate(float*, float, signed char const*, nn::g3d::AnimFrameCache*) const;
PreBind(nn::g3d::ResShape const*);
BindCheck(nn::g3d::ResShape const*) const;
Initialize(float*) const;

} } } 
