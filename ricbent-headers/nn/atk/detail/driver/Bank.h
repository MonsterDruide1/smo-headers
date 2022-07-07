#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class Bank
{
public:
    Bank();
    ~Bank();
    NoteOn(nn::atk::detail::BankFileReader const&, nn::atk::detail::WaveArchiveFileReader const&, nn::atk::detail::driver::NoteOnInfo const&) const;
    CalcChannelVelocityVolume(unsigned char);
};

} } } } 
