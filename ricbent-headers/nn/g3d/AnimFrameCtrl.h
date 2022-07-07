#pragma once

namespace nn { namespace g3d { namespace AnimFrameCtrl {

Initialize(float, float, float (*)(float, float, float, void*));
PlayOneTime(float, float, float, void*);
PlayLoop(float, float, float, void*);
InvalidFrame;

} } } 
