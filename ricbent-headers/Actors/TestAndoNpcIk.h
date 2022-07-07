#pragma once

class TestAndoNpcIk
{
public:
    TestAndoNpcIk(char const*);
    init(al::ActorInitInfo const&);
    createJoint(char const*);
    linkJoint(TestAndoNpcIk::MyJoint*, TestAndoNpcIk::MyJoint*);
    createJointCtrl(TestAndoNpcIk::MyJoint*);
    initAfterPlacement();
    calcLocalPose(TestAndoNpcIk::MyJoint*);
    setInitQ(TestAndoNpcIk::MyJoint*);
    control();
    calcCCD(TestAndoNpcIk::MyJoint*, TestAndoNpcIk::MyJoint*, sead::Vector3<float> const&);
    applyModel(TestAndoNpcIk::MyJoint*);
    createEmptyJoint(char const*);
    rotateJoint(TestAndoNpcIk::MyJoint*, TestAndoNpcIk::MyJoint*, sead::Quat<float> const&);
    extendBone(TestAndoNpcIk::MyJoint*, float);
    backLocalPose(TestAndoNpcIk::MyJoint*);
};
