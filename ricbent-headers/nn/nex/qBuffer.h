#pragma once

namespace nn { namespace nex { 

class qBuffer
{
public:
    qBuffer(unsigned long, unsigned long);
    initialize(unsigned long);
    qBuffer(nn::nex::qBuffer const&);
    operator=(nn::nex::qBuffer const&);
    ~qBuffer();
    clear();
    resize(unsigned long, unsigned char const*, unsigned long);
    push_back(unsigned char const*, unsigned long);
    push_front(unsigned char const*, unsigned long);
    copy(nn::nex::qBuffer::iterator const&, unsigned long, unsigned char*) const;
    erase(nn::nex::qBuffer::iterator);
    erase(nn::nex::qBuffer::iterator, nn::nex::qBuffer::iterator);
    operator==(nn::nex::qBuffer const&) const;
    operator<(nn::nex::qBuffer const&) const;
    operator=(nn::nex::qBuffer&&);
    Trace(unsigned long, bool);
};

} } 
