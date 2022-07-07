#pragma once

namespace sead { 

class Event
{
public:
    Event();
    Event(bool);
    initialize(bool);
    Event(sead::Heap*);
    Event(sead::Heap*, sead::IDisposer::HeapNullOption);
    Event(sead::Heap*, bool);
    Event(sead::Heap*, sead::IDisposer::HeapNullOption, bool);
    ~Event();
    wait();
    wait(sead::TickSpan);
    setSignal();
    resetSignal();
};

} 
