#pragma once

namespace nn { namespace nex { 

class StateMachine
{
public:
    StateMachine(void (nn::nex::StateMachine::*)(nn::nex::StateMachine::QEvent const&));
    TopState(nn::nex::StateMachine::QEvent const&);
    ~StateMachine();
    InitialTransition();
    Trigger(void (nn::nex::StateMachine::* (nn::nex::StateMachine::*)(nn::nex::StateMachine::QEvent const&))(nn::nex::StateMachine::QEvent const&), unsigned short);
    IsInState(void (nn::nex::StateMachine::* (nn::nex::StateMachine::*)(nn::nex::StateMachine::QEvent const&))(nn::nex::StateMachine::QEvent const&));
    StaticStateTransition(nn::nex::StateMachine::TransitionPath*, void (nn::nex::StateMachine::* (nn::nex::StateMachine::*)(nn::nex::StateMachine::QEvent const&))(nn::nex::StateMachine::QEvent const&));
    TransitionPathSetup(nn::nex::StateMachine::TransitionPath*, void (nn::nex::StateMachine::* (nn::nex::StateMachine::*)(nn::nex::StateMachine::QEvent const&))(nn::nex::StateMachine::QEvent const&));
    DispatchEvent(nn::nex::StateMachine::QEvent const&);
};

} } 
