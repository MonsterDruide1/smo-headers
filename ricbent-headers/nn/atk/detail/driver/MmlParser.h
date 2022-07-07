#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class MmlParser
{
public:
    Parse(nn::atk::detail::driver::MmlSequenceTrack*, bool) const;
    ReadArg(unsigned char const**, nn::atk::detail::driver::SequenceSoundPlayer*, nn::atk::detail::driver::SequenceTrack*, nn::atk::detail::driver::MmlParser::SeqArgType) const;
    Read24(unsigned char const**) const;
    Read16(unsigned char const**) const;
    CommandProc(nn::atk::detail::driver::MmlSequenceTrack*, unsigned int, int, int) const;
    GetVariablePtr(nn::atk::detail::driver::SequenceSoundPlayer*, nn::atk::detail::driver::SequenceTrack*, int) const;
    NoteOnCommandProc(nn::atk::detail::driver::MmlSequenceTrack*, int, int, int, bool) const;
    ReadVar(unsigned char const**) const;
    ParseAllocTrack(void const*, unsigned int, unsigned int*);
    ~MmlParser();
    PanCenter;
    SurroundPanCenter;
    TempoMin;
    TempoMax;
    mPrintVarEnabledFlag;
};

} } } } 
