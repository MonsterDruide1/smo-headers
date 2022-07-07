#pragma once

namespace nn { namespace atk { namespace detail { 

class GroupFileReader
{
public:
    GroupFileReader(void const*);
    ReadGroupItemLocationInfo(nn::atk::detail::GroupItemLocationInfo*, unsigned int) const;
    GetGroupItemExCount() const;
    ReadGroupItemInfoEx(nn::atk::detail::GroupFile::GroupItemInfoEx*, unsigned int) const;
    SignatureFile;
};

} } } 
