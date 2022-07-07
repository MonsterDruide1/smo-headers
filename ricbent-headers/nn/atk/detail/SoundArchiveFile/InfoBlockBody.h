#pragma once

namespace nn { namespace atk { namespace detail { namespace SoundArchiveFile { namespace InfoBlockBody {

GetSoundInfo(unsigned int) const;
GetSoundInfoReferenceTable() const;
GetBankInfo(unsigned int) const;
GetBankInfoReferenceTable() const;
GetPlayerInfo(unsigned int) const;
GetPlayerInfoReferenceTable() const;
GetSoundGroupInfo(unsigned int) const;
GetSoundGroupInfoReferenceTable() const;
GetGroupInfo(unsigned int) const;
GetGroupInfoReferenceTable() const;
GetWaveArchiveInfo(unsigned int) const;
GetWaveArchiveInfoReferenceTable() const;
GetFileInfo(unsigned int) const;
GetFileInfoReferenceTable() const;
GetItemFileId(unsigned int) const;
GetItemPrefetchFileId(unsigned int) const;
GetItemStringId(unsigned int) const;
GetSoundArchivePlayerInfo() const;

} } } } } 
