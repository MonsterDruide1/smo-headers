#pragma once

namespace nn { namespace atk { namespace detail { namespace SoundArchiveFile { namespace StringBlockBody {

GetSection(nn::atk::detail::SoundArchiveFile::StringBlockBody::Sections) const;
GetString(unsigned int) const;
GetItemIdImpl(nn::atk::detail::SoundArchiveFile::StringBlockBody::Sections, char const*) const;
DumpTree() const;

} } } } } 
