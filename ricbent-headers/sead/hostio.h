#pragma once

namespace sead { namespace hostio {

curveLinear_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveHermit_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveStep_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveSin_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveCos_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveSinPow2_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveLinear2D_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveHermit2D_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveStep2D_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveNonuniformSpline_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveHermit2DSmooth_<float>(float, sead::hostio::CurveDataInfo const*, float const*);
curveLinear_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveHermit_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveStep_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveSin_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveCos_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveSinPow2_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveLinear2D_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveHermit2D_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveStep2D_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveNonuniformSpline_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
curveHermit2DSmooth_<double>(float, sead::hostio::CurveDataInfo const*, double const*);
sCurveFunctionTbl_f32;
sCurveFunctionTbl_f64;
sCurveFunctionTbl_Vec2f;
sCurveFunctionTbl_Vec2d;

} } 
