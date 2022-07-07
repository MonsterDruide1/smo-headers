#pragma once

namespace nn { namespace atk { 

class FsSoundArchive
{
public:
    detail_GetFileAddress(unsigned int) const;
    FsSoundArchive();
    ~FsSoundArchive();
    Close();
    Open(char const*);
    LoadFileHeader();
    OpenStream(void*, unsigned long, long, unsigned long) const;
    OpenExtStream(void*, unsigned long, char const*, void*, unsigned long) const;
    detail_GetRequiredStreamBufferSize() const;
    LoadHeader(void*, unsigned long);
    LoadLabelStringData(void*, unsigned long);
    FileAccessBegin() const;
    FileAccessEnd() const;
    BufferAlignSize;
};

} } 
