#pragma once

#include "math/seadVector.h"

namespace al
{
    class CameraArrowCollider {
        public:
            void update(sead::Vector3f const &,sead::Vector3f const &,sead::Vector3f const &);
    };
};
