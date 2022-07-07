#pragma once

namespace al { 

class ModelCtrl
{
public:
    ModelCtrl();
    ~ModelCtrl();
    initialize(nn::g3d::ResModel*, int, int, sead::Heap*, al::ShaderHolder*);
    tryBindShader();
    tryUpdateModelAdditionalInfoUbo(int);
    updateWorldMatrix(sead::Matrix34<float> const&, sead::Vector3<float> const&);
    updateGpuBuffer(int);
    calcBounding();
    getLodLevel() const;
    getLodLevelDepthShadow() const;
    calcBoundingLod(int);
    updateQueryBox();
    updateModelDrawBuffer(int);
    updateGpuBufferAll();
    isShapeVisible(int) const;
    setCubeMapIndexAllShape(int);
    recreateDisplayList();
    setMaterialProgrammable(int, bool);
    isMaterialProgrammable(int);
    setSkeletonUpdateInfo(bool, sead::Matrix34<float> const&, sead::Vector3<float> const&);
    setDirtyTexture();
    onZPrePass();
    offZPrePass();
    getEnvTexInfo(int) const;
    requestModelAdditionalInfoUbo();
    setLodCtrl(al::ModelLodCtrl*);
    getLodLevelMax() const;
    getLodLevelMaterial() const;
    getLodLevelNoClamp() const;
    setLodLevelForce(int);
    updateLodCtrl();
    setDitherAnimator(al::DitherAnimator*);
    updateDitherAnimator();
    checkChangeDisplayList();
    addToDrawerCulling();
    removeFromDrawerCulling();
    updateSubMesh();
    setModelMaterialCategory(al::ModelMaterialCategory const*);
    setModelAlphaMask(float);
    setModelUvOffset(sead::Vector2<float> const&);
    setModelProjMtx0(sead::Matrix44<float> const&);
    setModelProjMtx1(sead::Matrix44<float> const&);
    setModelProjMtx2(sead::Matrix44<float> const&);
    setModelProgProjMtx0(sead::Matrix44<float> const&);
    setModelProgProjMtx1(sead::Matrix44<float> const&);
    setModelProgProjMtx2(sead::Matrix44<float> const&);
    setModelProgProjMtx3(sead::Matrix44<float> const&);
    setModelProgConstant0(float);
    setModelProgConstant1(float);
    setModelProgConstant2(float);
    setModelProgConstant3(float);
    setModelProgConstant4(float);
    setModelProgConstant5(float);
    setModelProgConstant6(float);
    setModelProgConstant7(float);
    setNormalAxisXScale(float);
    calcCameraToBoundingSphereDistance() const;
    isUseLocalShadowMap() const;
    validateOcclusionQuery();
    invalidateOcclusionQuery();
    isValidOcclusionQuery() const;
    createUniqShader();
    isCreateUniqShader(int);
    getUniqModelShader(int);
    getUniqModelShaderAssgin(int);
    pushDisplayListModel(agl::DisplayList*);
    pushDisplayListShape(agl::DisplayList*, int);
    getModelShapeCtrl(int) const;
    initResource(al::Resource*, al::Resource*);
    initModel(al::GpuMemAllocator*, al::ModelShaderHolder*, al::ModelOcclusionCullingDirector*, al::ShadowDirector*, al::PrepassTriangleCulling*, int, int);
    tryCreateCulledIndexBuffer();
    show();
    hide();
    calc(sead::Matrix34<float> const&, sead::Vector3<float> const&);
    calcView();
    calcModelObjBoundingWithOffset(nn::g3d::Sphere*) const;
    setCameraInfo(sead::Matrix34<float> const*, sead::Matrix34<float> const*, sead::Matrix44<float> const*, sead::Matrix44<float> const*);
    getShapeObj(int) const;
};

} 
