#pragma once

namespace nn { namespace nex { 

class SlidingWindow
{
public:
    NbDataPending();
    Empty();
    AcquireIterator();
    GetPacket(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<nn::nex::LogicalClockTmpl<unsigned short, short>, nn::nex::PacketOut*>, std::__1::__tree_node<std::__1::__value_type<nn::nex::LogicalClockTmpl<unsigned short, short>, nn::nex::PacketOut*>, void*>*, long> >);
    ReleaseIterator();
    Purge();
    Push(nn::nex::PacketOut*);
    Trace(unsigned long);
    GetNextToSend();
    GetPacket(nn::nex::LogicalClockTmpl<unsigned short, short>);
    Acknowledged(nn::nex::LogicalClockTmpl<unsigned short, short>, nn::nex::qMap<unsigned int, unsigned int>&);
    SlidingWindow(unsigned short, unsigned long);
    ~SlidingWindow();
    CheckThreshold(char*);
    GetFreeBufferNum() const;
    ReadyToSend();
    DataPending();
    s_wmSlidingWindow;
};

} } 
