#pragma once

namespace alModelShapeFunction {

isEnableGsCullingCulledIndexBuffer(al::ModelShapeCtrl const&);
isEnableDrawCulledIndexBuffer(al::ModelShapeCtrl const&);
drawShapeCulled(agl::DrawContext*, al::ModelShapeCtrl const&);
drawShape(agl::DrawContext*, al::ModelShapeCtrl const&, nn::g3d::ViewVolume const*, nn::g3d::ShapeObj const&, int, bool);
drawShapePrepareCulling(agl::DrawContext*, al::ModelShapeCtrl const&, nn::g3d::ViewVolume const*, nn::g3d::ShapeObj const&, int, bool);
drawShapeCtrl(agl::DrawContext*, al::ModelShapeCtrl const&, nn::g3d::ViewVolume const*, nn::g3d::ShapeObj const&, int, bool);
drawShapeCtrlZprepass(agl::DrawContext*, al::ModelShapeCtrl const&, nn::g3d::ViewVolume const*, nn::g3d::ShapeObj const&, int, bool);

} 
