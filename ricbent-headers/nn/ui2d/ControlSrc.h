#pragma once

namespace nn { namespace ui2d { 

class ControlSrc
{
public:
    ControlSrc();
    Initialize(void const*, nn::ui2d::ResExtUserDataList const*);
    GetFunctionalPaneName(int) const;
    FindFunctionalPaneName(char const*) const;
    GetFunctionalAnimName(int) const;
    FindFunctionalAnimName(char const*) const;
    GetExtUserDataCount() const;
    GetExtUserDataArray() const;
    FindExtUserDataByName(char const*) const;
};

} } 
