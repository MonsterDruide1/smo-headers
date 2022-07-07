#pragma once

class TestAndoNpcIk2
{
public:
    TestAndoNpcIk2(char const*);
    init(al::ActorInitInfo const&);
    callback(SkeletonDynamicsCallbackInfo*);
    calcAnim();
};
