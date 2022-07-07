#pragma once

namespace nn { namespace atk { namespace detail { 

class SequenceSoundFileReader
{
public:
    SequenceSoundFileReader(void const*);
    GetSequenceData() const;
    GetOffsetByLabel(char const*, unsigned int*) const;
    GetLabelByOffset(unsigned int) const;
    SignatureFile;
};

} } } 
