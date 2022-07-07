#pragma once

namespace nn { namespace atk { namespace detail { namespace SequenceSoundFile { namespace LabelBlockBody {

GetLabelInfo(int) const;
GetLabel(int) const;
GetLabelByOffset(unsigned int) const;
GetOffset(int, unsigned int*) const;
GetOffsetByLabel(char const*, unsigned int*) const;

} } } } } 
