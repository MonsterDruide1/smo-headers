#pragma once

#include "al/projection/Projection.h"
#include <sead/gfx/seadCamera.h>
#include <sead/gfx/seadProjection.h>

namespace al
{
	class CameraStartInfo
	{
	public:
	
	};
	
	
	
	class CameraViewFlag
	{
	public:
		CameraViewFlag();
		virtual void resetAllFlag();
	};
	
	
	class CameraViewInfo
	{
	public:
		CameraViewInfo(int, sead::LookAtCamera const&, al::Projection const&, al::CameraViewFlag const&, al::OrthoProjectionInfo const&);
	};
};