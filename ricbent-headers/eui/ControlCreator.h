#pragma once

namespace eui { 

class ControlCreator
{
public:
    ControlCreator(eui::ButtonGroup*, nn::util::IntrusiveList<eui::ControlBase, nn::util::IntrusiveListMemberNodeTraits<eui::ControlBase, &eui::ControlBase::m_Link, eui::ControlBase> >*, nn::util::IntrusiveList<eui::ControlBase, nn::util::IntrusiveListMemberNodeTraits<eui::ControlBase, &eui::ControlBase::m_Link, eui::ControlBase> >*);
    CreateControl(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::ui2d::Layout*, nn::ui2d::ControlSrc const&);
    CreateControlImpl_(nn::ui2d::ControlSrc const&, nn::ui2d::Layout*);
    InsertButtonToButtonGroup_(eui::AnimButton*);
    ~ControlCreator();
};

} 
