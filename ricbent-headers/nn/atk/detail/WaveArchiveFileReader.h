#pragma once

namespace nn { namespace atk { namespace detail { 

class WaveArchiveFileReader
{
public:
    WaveArchiveFileReader();
    WaveArchiveFileReader(void const*, bool);
    Initialize(void const*, bool);
    HasIndividualLoadTable() const;
    Finalize();
    InitializeFileTable();
    GetWaveFileCount() const;
    GetWaveFile(unsigned int) const;
    GetWaveFileSize(unsigned int) const;
    GetWaveFileOffsetFromFileHead(unsigned int) const;
    SetWaveFile(unsigned int, void const*);
    SignatureFile;
    SignatureWarcTable;
};

} } } 
