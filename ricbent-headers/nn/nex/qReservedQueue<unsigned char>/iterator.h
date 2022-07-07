#pragma once

namespace nn { namespace nex { namespace qReservedQueue<unsigned char> { 

class iterator
{
public:
    iterator();
    iterator(nn::nex::qReservedQueue<unsigned char> const*, bool);
    operator*();
    operator*() const;
    operator[](long);
    operator[](long) const;
    operator++();
    SetCurrentIndex(unsigned long, bool);
    operator++(int);
    operator+(long) const;
    operator+=(long);
    operator--();
    operator--(int);
    operator-(long) const;
    operator-(nn::nex::qReservedQueue<unsigned char>::iterator) const;
    operator-=(long);
    operator==(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
    operator!=(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
    operator<(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
    operator>(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
    operator<=(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
    operator>=(nn::nex::qReservedQueue<unsigned char>::iterator const&) const;
};

} } } 
