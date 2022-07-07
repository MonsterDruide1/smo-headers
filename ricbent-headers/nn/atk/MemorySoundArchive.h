#pragma once

namespace nn { namespace atk { 

class MemorySoundArchive
{
public:
    MemorySoundArchive();
    ~MemorySoundArchive();
    Initialize(void const*);
    Finalize();
    detail_GetFileAddress(unsigned int) const;
    OpenStream(void*, unsigned long, long, unsigned long) const;
    OpenExtStream(void*, unsigned long, char const*, void*, unsigned long) const;
    detail_GetRequiredStreamBufferSize() const;
};

} } 
