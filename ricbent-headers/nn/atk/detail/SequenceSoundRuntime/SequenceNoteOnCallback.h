#pragma once

namespace nn { namespace atk { namespace detail { namespace SequenceSoundRuntime { 

class SequenceNoteOnCallback
{
public:
    NoteOn(nn::atk::detail::driver::SequenceSoundPlayer*, unsigned char, nn::atk::detail::driver::NoteOnInfo const&);
    ~SequenceNoteOnCallback();
};

} } } } 
