#pragma once

namespace nn { namespace ui2d { namespace Layout { 

class PartsBuildDataSet
{
public:
    FindPartsPropertyFromName(char const*) const;
    GetPropertyResBlock(nn::ui2d::ResPartsProperty const*) const;
    GetPartsPaneBasicInfoResBlock(nn::ui2d::ResPartsProperty const*) const;
    GetExtUserDataListResBlock(bool*, nn::ui2d::ResPartsProperty const*) const;
    PartsBuildDataSet(nn::ui2d::Parts*, nn::ui2d::ResParts const*, nn::ui2d::BuildResSet const*, nn::ui2d::ResVec2 const*);
};

} } } 
