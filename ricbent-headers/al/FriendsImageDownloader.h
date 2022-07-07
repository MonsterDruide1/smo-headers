#pragma once

namespace al { 

class FriendsImageDownloader
{
public:
    FriendsImageDownloader();
    Download(char const*, void*, unsigned long);
    SslCtxFunction(void*, void*, void*);
    HttpWriteFunction(char*, unsigned long, unsigned long, void*);
    DownloadImpl(void*);
    Cancel();
    GetDownloadedSize() const;
};

} 
